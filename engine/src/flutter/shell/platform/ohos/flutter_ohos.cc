#include "flutter_ohos.h"
#include <iostream>

bool FlutterOHOSInit(int width, int height) {
    std::cout << "[OHOS] FlutterOHOSInit: " << width << "x" << height << std::endl;
    // TODO: Hook Flutter Engine C API here
    return true;
}

void FlutterOHOSRun() {
    std::cout << "[OHOS] FlutterOHOSRun" << std::endl;
    // TODO: Start engine loop here , we add later
}

void FlutterOHOSShutdown() {
    std::cout << "[OHOS] FlutterOHOSShutdown" << std::endl;
    // TODO: Cleanup
}
