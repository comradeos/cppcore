#include <iostream>
#include <string>
#include "includes/separator.h"

class A {
   
};

class B : public A {
   
};

int main(int argc, char **argv)
{
    std::cout << "34_polymorphism" << std::endl;

    sep();

    B b;

    return 0;
}
