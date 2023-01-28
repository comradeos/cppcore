#include "print.h"

int main()
{
    std::cout << "app start... \n\n\n";
    int number = 123;
    void* addr = &number;
    
    print("aaaa");
    print(2312);
    void* invalid = nullptr;

    return 0;
}