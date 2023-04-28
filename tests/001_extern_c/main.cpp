#include <iostream>
#define A true

#ifdef A
    extern "C"
    {
        #include "clib.h"
    }
#endif

using namespace std;

int main()
{
    cout << "How to use extern C?\n";

    #ifdef A
        myLibFunction();
    #endif
    return 0;
}
