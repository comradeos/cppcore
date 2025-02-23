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
    std::cout << "27_destructors_order" << std::endl;

    sep();

    Something s1("s1");
    Something s2("s2");
    Something s3("s3");

    return 0;
}
