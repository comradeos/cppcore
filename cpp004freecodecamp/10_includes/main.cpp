/*

clear && g++ -std=c++17 -o main -Wall main.cpp separator.cpp && ./main

 */

#include <iostream>
#include <string>
#include "separator.h"
#include "min.h"
#include "max.h"


int main()
{
    std::cout << "Includes" << std::endl;

    sep();

    std::cout << "Min: " << min(1, 2) << std::endl;
    std::cout << "Max: " << max(1, 2) << std::endl;

    return 0;
}