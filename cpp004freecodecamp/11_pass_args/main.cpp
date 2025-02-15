#include <iostream>
#include <string>
#include "separator.h"

int main(int argc, char **argv)
{
    std::cout << "11_pass_args" << std::endl;

    std::cout << "argc: " << argc << std::endl;

    // Print all arguments
    for (int i = 0; i < argc; i++)
    {
        std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
    }

    sep();

    return 0;
}