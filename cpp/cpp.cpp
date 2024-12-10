#include <iostream>
#include <windows.h>

int main() {

    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);

    std::cout << "Hardware Information:\n";
    std::cout << "--------------------\n";

    std::cout << "OEM ID: " << sysInfo.dwOemId << std::endl;
    std::cout << "Number of Processors: " << sysInfo.dwNumberOfProcessors << std::endl;
    std::cout << "Processor Type: " << sysInfo.dwProcessorType << std::endl;
    std::cout << "wProcessorArchitecture" << sysInfo.wProcessorArchitecture << std::endl;
    std::cout << "dwPageSize" << sysInfo.dwPageSize << std::endl;
    std::cout << "dwProcessorType" << sysInfo.dwProcessorType << std::endl;
    std::cout << "lpMaximumApplicationAddress" << sysInfo.lpMaximumApplicationAddress << std::endl;
    std::cout << "lpMinimumApplicationAddress" << sysInfo.lpMinimumApplicationAddress << std::endl;
  

    std::cout << "Processor Architecture: ";

    switch (sysInfo.wProcessorArchitecture) {
    case PROCESSOR_ARCHITECTURE_INTEL:
        std::cout << "x86\n";
        break;
    case PROCESSOR_ARCHITECTURE_AMD64:
        std::cout << "x64\n";
        break;
    case PROCESSOR_ARCHITECTURE_ARM:
        std::cout << "ARM\n";
        break;
    default:
        std::cout << "Unknown\n";
    }

    std::cout << "Page Size: " << sysInfo.dwPageSize << " bytes\n";

    return 0;
}
