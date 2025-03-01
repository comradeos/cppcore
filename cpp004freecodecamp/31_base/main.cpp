#include <iostream>
#include <string>
#include "includes/separator.h"

class A {
    public:
        std::string public_val {"A public value"};
    protected: 
        std::string protected_val {"A protected value"};
    private: 
        std::string private_cal {"A private value"};
};

class B : public A {
    public:
        std::string public_val {"B public value"};
    // protected: 
        // std::string protected_val {"B protected value}";
    // private: 
        // std::string private_cal {"B private value"};
};



int main(int argc, char **argv)
{
    std::cout << "31_base" << std::endl;

    sep();

    A a;

    std::cout << "a.public_val: " << a.public_val << std::endl;
    // std::cout << "a.protected_val: " << a.protected_val << std::endl;
    // std::cout << "a.private_val: " << a.private_val << std::endl;

    B b;

    std::cout << "b.public_val: " << b.public_val << std::endl;

    return 0;
}
