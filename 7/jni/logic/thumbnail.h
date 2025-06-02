/*
 * thumbnail.h
 *
 *  Created on: 2024年7月9日
 *      Author: 10589
 */

#ifndef JNI_LOGIC_THUMBNAIL_H_
#define JNI_LOGIC_THUMBNAIL_H_


#pragma once

#include <system/Thread.h>
#include <vector>
#include <string.h>
#include <iostream>
#include <cstring>
#include <sstream>

class Thumbnail : public Thread {
public:
    virtual bool readyToRun();
    virtual bool threadLoop();
};
extern bool can_run;
void make_thumbnail(std::string file);
extern void make_thumbnail(std::string base64_data,std::string name);
#endif /* JNI_LOGIC_THUMBNAIL_H_ */
