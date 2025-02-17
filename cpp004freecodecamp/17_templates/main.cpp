#include <iostream>
#include <string>
#include "separator.h"

/*

template <typename T>
T maximum(T a, T b){
    return (a > b) ? a : b;
}

*/

template <typename T> void print_type(T a) {
    // вывести имя типа переменной
    std::cout << typeid(a).name() << std::endl;
}

int main(int argc, char **argv)
{
    std::cout << "17_templates" << std::endl;

    sep();

    print_type(3); // i - int
    print_type(3.14); // d - double
    print_type("hello"); // PKc - это что за тип? (P означает указатель (pointer). K означает константность (const). c означает тип char.)

    return 0;
}
