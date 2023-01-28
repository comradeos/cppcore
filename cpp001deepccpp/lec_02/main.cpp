#include "print.h"

int main()
{
    cout << "app start... \n\n\n";
    
    int num = 123;
    cout << num << "\n";

    int * numPointer = &num;
    cout << numPointer << "\n";

    int ** numPointerPointer = &numPointer;
    cout << numPointerPointer << "\n";

    int *** numPointerPointerPointer = &numPointerPointer;
    cout << numPointerPointerPointer << "\n";

    *** numPointerPointerPointer = 222;
    cout << num << "\n";    

    int n = 1234;
    int * nPtr = &n;
    cout << nPtr << "\n";

    return 0;
}