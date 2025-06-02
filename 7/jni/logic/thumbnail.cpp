/*
 * thumbnail.cpp
 *
 *  Created on: 2024年7月9日
 *      Author: 10589
 */

#include"thumbnail.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cctype>
#include <cmath>
#include "utils/Log.h"
#include <string.h>
#include <limits.h>
#include <float.h> // For DBL_MAX
#include <iostream>
#include <vector>
#include <cmath>
#include <unistd.h> // POSIX标准


// Base64 解码表
static const std::string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" ;



// 读取文件并提取 Base64 数据
std::string extract_base64_data(const std::string &file_path) {

	FILE *f = fopen(file_path.c_str(), "r");
	if (!f) throw std::runtime_error("Failed to open file.");

	char buf[1024];
	bool in_thumbnail = false;
	std::string base64_data;

	while (fgets(buf, sizeof(buf), f)) {
	    if (strncasecmp(buf, "; thumbnail begin", 15) == 0) {
	        in_thumbnail = true;
	        continue;
	    }
	    if (strncasecmp(buf, "; thumbnail end", 13) == 0) {
	        in_thumbnail = false;
	        continue;
	    }
	    if (in_thumbnail && buf[0] == ';' && buf[1] == ' ') {
	        const char* start = &buf[2];
	        const char* end = strchr(start, '\n');
	        if (end) {
	            base64_data.append(start, end - start);
	        } else {
	            base64_data.append(start);
	        }
	    }
	}

	fclose(f);

    // 清理Base64数据，去除无效字符
    base64_data.erase(std::remove_if(base64_data.begin(), base64_data.end(), [](char c) {
        return !isalnum(c) && c != '+' && c != '/' && c != '=';
    }), base64_data.end());



    return base64_data;
}


// Base64 解码
std::vector<unsigned char> base64_decode(const std::string &base64_data) {
    int len = base64_data.size();
    int padding = 0;

    // 计算填充字符的数量
    if (base64_data[len - 1] == '=') {
        padding++;
        if (base64_data[len - 2] == '=') {
            padding++;
        }
    }

    int decoded_len = (len * 3) / 4 - padding;
    std::vector<unsigned char> decoded_data(decoded_len);

    int i = 0, j = 0;
    unsigned char a, b, c, d;
    for (i = 0; i < len; i += 4) {
        a = base64_data[i] == '=' ? 0 & i++ : base64_chars.find(base64_data[i]);
        b = base64_data[i+1] == '=' ? 0 & i++ : base64_chars.find(base64_data[i+1]);
        c = base64_data[i+2] == '=' ? 0 & i++ : base64_chars.find(base64_data[i+2]);
        d = base64_data[i+3] == '=' ? 0 & i++ : base64_chars.find(base64_data[i+3]);

        decoded_data[j++] = (a << 2) | (b >> 4);
        if (j < decoded_len) decoded_data[j++] = ((b & 15) << 4) | (c >> 2);
        if (j < decoded_len) decoded_data[j++] = ((c & 3) << 6) | d;
    }

    return decoded_data;
}

// 将 Base64 解码后的数据保存为 PNG 文件
bool save_png_from_base64(const std::string &base64_data, const std::string &output_file) {
    // 解码 Base64 数据
    std::vector<unsigned char> png_data = base64_decode(base64_data);
//    std::ofstream file(file_path.c_str(), std::ios::out | std::ios::binary);
    // 将解码后的数据写入文件
    std::ofstream out_file(output_file.c_str(), std::ios::out | std::ios::binary);
    if (!out_file) {
        std::cerr << "Failed to open output file." << std::endl;
        return false;
    }
    out_file.write(reinterpret_cast<const char*>(png_data.begin()), png_data.size());

    out_file.close();

    return true;
}

void make_thumbnail(std::string base64_data){
//			std::string base64_data = extract_base64_data(file);
			if(!base64_data.empty()){
			    // 输出文件路径
			    std::string output_file = "/tmp/Print_Thumbnails.png";

			    // 保存为 PNG 文件
			    if (save_png_from_base64(base64_data, output_file)) {

			       LOGD("1PNG file saved successfully: ");
			    } else {
			    	LOGD("1Failed to save PNG file.");
			    }
			}

}

void make_thumbnail(std::string base64_data,std::string name){
//			std::string base64_data = extract_base64_data(file);
			if(!base64_data.empty()){
			    // 输出文件路径
			    std::string output_file = "/tmp/" + name + ".png";

			    // 保存为 PNG 文件
			    if (save_png_from_base64(base64_data, output_file)) {

			       LOGD("2PNG file saved successfully: %s",output_file.c_str());
			    } else {
			    	LOGD("2Failed to save PNG file:%s.\r\n",output_file.c_str());
			        std::cerr << "Failed to save PNG file." << std::endl;
			    }
			}

}

bool can_run = false;
bool Thumbnail::readyToRun() {
	can_run = true;
    return true;
}

bool Thumbnail::threadLoop() {
    if (exitPending()) {
        return false;
    }


    usleep(1000 * 600);
    return true;
}
