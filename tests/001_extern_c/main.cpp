#include <iostream>
#define A true

#ifdef A
    extern "C" {
        #include "clib.h"
    }
#endif

#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    cout << "Привіт\n";
    fun();
    return 0;
}
