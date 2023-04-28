#include <iostream>

extern "C"
{
    #include "clib.h"
}

using namespace std;

int main()
{
    cout << "How to use extern C?\n";
    myFunction();
    return 0;
}
