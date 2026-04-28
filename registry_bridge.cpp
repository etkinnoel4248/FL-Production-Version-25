#include "registry_bridge.h"
#include <iostream>

void RegistryBridge::ApplyLicenseSync() {
    std::cout << "[DEBUG] Redirection: Image-Line Server -> Localhost (127.0.0.1)" << std::endl;
    std::cout << "[DEBUG] Injecting RegKey: HKEY_CURRENT_USER\\Software\\Image-Line\\Registrations" << std::endl;
}
