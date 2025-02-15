#include <iostream>
#include <string>
#include "separator.h"

void incr_and_print(int &val)
{
    std::cout << "int val: " << val << std::endl;
}

void incr_and_print(std::string &val)
{
    std::cout << "string val: " << val << std::endl;
}

int main(int argc, char **argv)
{
    std::cout << "14_overload" << std::endl;

    sep();

    int int_val = 42;
    std::string str_val = "Hello, World!";

    incr_and_print(int_val);
    incr_and_print(str_val);

    return 0;
}
