#include <iostream>
#include <string>
#include "includes/separator.h"
#include <memory>

class A {
public:
    A() {
        std::cout << "A created" << std::endl;
    }
    ~A() {
        std::cout << "A destroyed" << std::endl;
    }
    void info() {
        std::cout << "Info: A" << std::endl;
    }
};

int main(int argc, char **argv)
{
    std::cout << "36_smart_pointers" << std::endl;
    
    sep();

    // A * pA = new A();
    // std::cout << "Created A" << std::endl;

    std::unique_ptr<A> pA = std::make_unique<A>();
    pA->info();

    return 0;
}
