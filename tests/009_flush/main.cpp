/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

 */

#include <iostream>
#include <cstdio>
#include <thread>
#include <chrono>

int main()
{
    std::cout << "Flush" << std::endl;


    // Использование std::cout
    std::cout << "Hello, ";
    std::cout.flush(); // Принудительный вывод
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Пауза 1 секунда
    std::cout << "world!\n";
    std::cout.flush(); // Принудительный вывод


    return 0;
}