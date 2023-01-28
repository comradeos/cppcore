#include "print.h"

int main()
{
    cout << "app start... \n\n\n";
    int number = 123;
    
    int * addr = &number;

    void * invalid = nullptr;

    char charValue = 'a';
    print(charValue);

    char * charPointer = &charValue;

    cout << charPointer << "\n";

    * charPointer = 'b';
    print(charValue);

    return 0;
}