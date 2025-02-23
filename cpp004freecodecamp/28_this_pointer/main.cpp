#include <iostream>
#include <string>
#include "includes/separator.h"

class Something {
    public:
        std::string name;

        Something(std::string name) {
            this->name = name;
            std::cout << "Constructor called for " << name << std::endl;
        }

        ~Something() {
            std::cout << "Destructor called for " << name << std::endl;
        }
};

int main(int argc, char **argv)
{
    std::cout << "28_this_pointer" << std::endl;

    sep();

    Something s1("s1");

    return 0;
}
