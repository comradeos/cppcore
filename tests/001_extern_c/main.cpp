#include <iostream>

extern "C" {
    #include "clib.h"
}

int main() {
    std::cout << "hello" << std::endl;
    fun();
    return 0;
}
