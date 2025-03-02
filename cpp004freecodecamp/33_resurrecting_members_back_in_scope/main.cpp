#include <iostream>
#include <string>
#include "includes/separator.h"

class A {
    public:
        std::string public_name {"A public name"};
    protected:
        std::string protected_name {"A protected name"};
};

class B : public A {
    public: 
        using A::protected_name;
};

int main(int argc, char **argv)
{
    std::cout << "33_resurrecting_members_back_in_scope" << std::endl;

    sep();

    B b;

    std::cout << b.protected_name << std::endl;

    return 0;
}
