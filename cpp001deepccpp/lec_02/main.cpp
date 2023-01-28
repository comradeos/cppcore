#include "print.h"

int main()
{
    cout << "app start... \n\n\n";
    
    int num = 123;
    cout << num << "\n";

    int * numPointer = &num;
    cout << numPointer << "\n";

    return 0;
}