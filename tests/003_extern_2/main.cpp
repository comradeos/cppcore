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

// g++ -c .\main.cpp 

// g++ .\main.o .\cfile.o -o main.exe

// .\main.exe