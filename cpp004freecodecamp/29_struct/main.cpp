#include <iostream>
#include <string>
#include "includes/separator.h"

class Dog {
    public:
        std::string name;
};

struct Cat {
    std::string name;
};

int main(int argc, char **argv)
{
    std::cout << "29_struct" << std::endl;

    sep();

    Cat cat1;
    cat1.name = "Jojo";
    std::cout << "cat1 name: " << cat1.name << std::endl;

    Dog dog1;
    dog1.name = "Fido";
    std::cout << "dog1 name: " << dog1.name << std::endl;

    return 0;
}
