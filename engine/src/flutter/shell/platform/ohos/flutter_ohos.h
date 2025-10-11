#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

bool FlutterOHOSInit(int width, int height);

void FlutterOHOSRun();

void FlutterOHOSShutdown();

#ifdef __cplusplus
}
#endif
