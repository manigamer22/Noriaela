#include "main.hpp"

int __attribute__((constructor)) Init() {
    /* do shiz her. */
    
    InitializeInterfaces();
    
    InitializeVMTs();
    
    InitializeHooks();
        
    Offsets::getOffsets();
    
    return 0;
}

void __attribute__((constructor)) DeInit() {
}
