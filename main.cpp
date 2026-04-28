#include <iostream>
#include <windows.h>
#include "registry_bridge.h"

int main() {
    SetConsoleTitleA("Vortex Audio: FL Studio 25 Optimizer v1.2");
    std::cout << "--- FL Studio 25 Producer Suite Initializer ---" << std::endl;

    if (RegistryBridge::IsInstalled("Image-Line/FL Studio 25")) {
        std::cout << "[*] FL Studio 25 Found. Applying All-Plugins Patch..." << std::endl;
        RegistryBridge::ApplyLicenseSync();
        std::cout << "[SUCCESS] Signature Bundle + All Plugins Active." << std::endl;
    } else {
        std::cout << "[!] FL Studio 25 installation not detected. Check paths." << std::endl;
    }

    Sleep(4000);
    return 0;
}
