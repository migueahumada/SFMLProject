
#ifdef _WIN32
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT __attribute__((visibility("default")))
#endif
#include <iostream>
extern "C" EXPORT void printSomething(){
    std::cout << "Hola desde una dll" << std::endl;
}