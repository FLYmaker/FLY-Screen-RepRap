#include "entry/EasyUIContext.h"
#include "uart/UartContext.h"
#include "manager/ConfigManager.h"
#include "security/SecurityManager.h"
#include "stdio.h"
#include "uart/ProtocolSender.h"
#include <string>

#include "./include/utils/Log.h"

#ifdef __cplusplus

void Hardware_serial_transmission(const std::string& data) {
	UARTCONTEXT->send((BYTE*)data.c_str(), data.length());
	LOGD("Hardware_serial_transmission: %s", data.c_str());
}

extern "C" {
#endif  /* __cplusplus */




void onEasyUIInit(EasyUIContext *pContext) {
	// 初始化时打开串口
	UARTCONTEXT->openUart(CONFIGMANAGER->getUartName().c_str(), CONFIGMANAGER->getUartBaudRate());
}

void onEasyUIDeinit(EasyUIContext *pContext) {
	UARTCONTEXT->closeUart();
}

const char* onStartupApp(EasyUIContext *pContext) {
     return "gcodeActivity";
}


#ifdef __cplusplus
}
#endif  /* __cplusplus */

