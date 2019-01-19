#include <iostream>
#include <switch.h>

using namespace std;

int main()
{
    consoleInit(NULL);

    cout << "Hello World! from cout!" << endl;

    while (appletMainLoop())
    {
        hidScanInput();
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
        if (kDown & KEY_PLUS) {
            break;
        }
        consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;
}
