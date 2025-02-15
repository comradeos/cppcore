#include <iostream>
#include <string>
#include "separator.h"

void incr_and_print(int &val)
{
    val++;
    std::cout << "val: " << val << std::endl;
}

int main(int argc, char **argv)
{
    std::cout << "13_pass_by_ref" << std::endl;

    sep();

    int val {10};
    std::cout << "val: " << val << std::endl;
    incr_and_print(val);
    std::cout << "val: " << val << std::endl;

    return 0;
}
