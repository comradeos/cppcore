#include <iostream>

int main() {
    // compile time error
    std::cout << "compile time error" << std::endl;
    
    // runtime error
    int number = 7/0;
    std::cout << "number " << number << std::endl;

    7/0; // warning
    return 0;
}