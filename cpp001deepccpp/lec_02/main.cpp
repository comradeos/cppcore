#include "print.h"

int main()
{
    cout << "app start... \n\n\n";
    
    int num = 123;
    // cout << num << "\n";

    int * numPointer = &num;
    // cout << numPointer << "\n";

    int ** numPointerPointer = &numPointer;
    // cout << numPointerPointer << "\n";

    int *** numPointerPointerPointer = &numPointerPointer;
    // cout << numPointerPointerPointer << "\n";

    *** numPointerPointerPointer = 222;
    // cout << num << "\n";    

    int n = 1234;
    int * nPtr = &n;
    // cout << nPtr << "\n";

    int n1 = 7;
    cout << n1 << "\n";
    
    int * n1Ptr = &n1;
    cout << n1Ptr << "\n";

    int * n1Ptr2 = n1Ptr + 2;
    cout << n1Ptr2 << "\n";

    * n1Ptr2 = 23213;
    cout << * n1Ptr2 << "\n";

    ptrdiff_t d1 = n1Ptr - n1Ptr2;
    cout << d1 << "\n";

    return 0;
}