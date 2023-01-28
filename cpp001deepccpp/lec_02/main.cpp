#include "print.h"

int main()
{
    // std::cout << "app start... \n\n\n";
    int number = 123;
    int* addr = &number;
    
    print("11111");
    print(addr);
    print("11111");

    void* invalid = nullptr;

    return 0;
}