#include <iostream>
#include <string>
#include "separator.h"

// function template
template <typename T> T io_max(T a, T b);

// template specialization
template <>
const char* io_max<const char*>(const char* a, const char* b);

int main(int argc, char **argv)
{
    std::cout << "18_template_specialization" << std::endl;

    sep();

    int a {10};
    int b {20};
    std::cout << "io_max(a, b) = " << io_max(a, b) << std::endl;


    double c {10.5};
    double d {20.5};
    std::cout << "io_max(c, d) = " << io_max(c, d) << std::endl;

    std::string e {"hello"};
    std::string f {"world"};
    std::cout << "io_max(e, f) = " << io_max(e, f) << std::endl;

    const char* g {"wild"};
    const char* h {"animal"};
    std::cout << "io_max(g, h) = " << io_max(g, h) << std::endl;

    return 0;
}

template <typename T> T io_max(T a, T b) {
    return (a > b) ? a : b;
}

template <>
const char* io_max<const char*>(const char* a, const char* b) {
    return (std::strcmp(a, b) > 0) ? a : b;
}
