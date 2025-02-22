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

template <typename T> const T& max(const T& a, const T& b) {
    return (a > b) ? a : b;
}

// template <typename T> T max(T a, T b) { // error
//     return (a > b) ? a : b;
// }

int main(int argc, char **argv)
{
    std::cout << "17_templates" << std::endl;

    sep();

    print_type(3); // i - int
    print_type(3.14); // d - double
    print_type("hello"); // PKc - это что за тип? (P означает указатель (pointer). K означает константность (const). c означает тип char.)

    sep();

    const int a {10};
    const int b {20};

    std::cout << "max(a, b) = " << max(a, b) << std::endl;

    return 0;
}
