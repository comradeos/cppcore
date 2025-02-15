#include <iostream>
#include <string>
#include "separator.h"

/*

template <typename T>
T maximum(T a, T b){
    return (a > b) ? a : b;
}

*/


int max(int a, int b){
    return (a > b) ? a : b;
}

double max(double a, double b){
    return (a > b) ? a : b;
}

std::string_view max(std::string_view a, std::string_view b){
    return (a > b) ? a : b;
}

// std::string_view – это невладеющий (non-owning) тип, который ссылается на существующую строку без копирования данных

template <typename T> T maximum(T a, T b);

int main(int argc, char **argv)
{
    std::cout << "16_blueprints" << std::endl;

    sep();

    std::cout << max(3, 5) << std::endl;

    sep();

    std::cout << max(3.10, 5.20) << std::endl;

    sep();

    std::cout << max("apple", "orange") << std::endl;

    sep();

    std::cout << maximum(3, 5) << std::endl;

    sep();

    std::cout << maximum(3.10, 5.20) << std::endl;

    sep();

    std::cout << maximum("apple", "orange") << std::endl;

    return 0;
}

template <typename T> T maximum(T a, T b) {
    return (a > b) ? a : b;
}