#include <iostream>
#include <string>
#include "includes/separator.h"

class Base {
public:
    Base() {
        description = "Base";
    }
    virtual void info() {
        std::cout << "Info: " << description << std::endl;
    }
    protected:
    std::string description {""};
};

class ObjectA : public Base {
public:
    ObjectA() {
        description = "ObjectA";
    }
    void info() override {
        std::cout << "Info: " << description << std::endl;
    }
};

int main(int argc, char **argv)
{
    std::cout << "35_virtual" << std::endl;
    
    sep();

    ObjectA objA;
    objA.info();

    return 0;
}
