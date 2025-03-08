#include <iostream>
#include <string>
#include "includes/separator.h"
#include "models/user.h"

int main(int argc, char **argv)
{
    std::cout << "37_headers" << std::endl;
    
    sep();

    User user("John Doe");
    std::cout << "User name: " << user.name << std::endl;

    sep();

    user.info();

    return 0;
}
