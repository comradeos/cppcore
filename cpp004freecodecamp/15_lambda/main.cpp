#include <iostream>
#include <string>
#include "separator.h"

int main(int argc, char **argv)
{
    std::cout << "15_lambda" << std::endl;

    sep();

    auto anon_func = [](){
        std::cout << "Hello, World!" << std::endl;
    };
    anon_func();

    int a = [](int a, int b) -> int { 
        return a + b; 
    }(1, 2);

    std::cout << "a: " << a << std::endl;

    sep();

    std::cout << "capture list" << std::endl;

    sep();

    int x = 10;
    
    // capture by value
    auto capture_by_value = [x](){
        std::cout << "x: " << x << std::endl;
    };
    capture_by_value();

    for (int i = 0; i < 3; i++)
    {
        capture_by_value(); // x is captured by value so it will not change
        x++;
    }

    sep();

    // capture by reference
    auto capture_by_reference = [&x](){
        std::cout << "x: " << x << std::endl;
    };
    capture_by_reference();

    for (int i = 0; i < 3; i++)
    {
        capture_by_reference(); // x is captured by reference so it will change
        x++;
    }

    sep();

    // capture all by value
    auto capture_all_by_value = [=](){
        std::cout << "x: " << x << std::endl;
    };

    capture_all_by_value();

    // capture all by reference
    auto capture_all_by_reference = [&](){
        std::cout << "x: " << x << std::endl;
    };

    return 0;
}
