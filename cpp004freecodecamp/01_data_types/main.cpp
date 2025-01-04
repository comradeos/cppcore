// clear && g++ -std=c++11 -o main -Wall main.cpp funcs.cpp && ./main

#include <iostream>
#include "funcs.h"

int main()
{
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0b00001111; // Binary
    int number4 = 0x0F; // Hexadecimal

    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number2: " << number2 << std::endl;
    std::cout << "number3: " << number3 << std::endl;
    std::cout << "number4: " << number4 << std::endl;

    ints();
    floats();
    bools();
    chars();
    autos();

    return 0;
}