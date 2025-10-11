#include "../flutter_ohos.h"

int main(int argc, char** argv) {
    if (!FlutterOHOSInit(1080, 1920)) {
        return -1;
    }

    FlutterOHOSRun();
    FlutterOHOSShutdown();

    return 0;
}
