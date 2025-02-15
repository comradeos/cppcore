#include <iostream>
#include <string>
#include "separator.h"

void say_age(int * age);

int main(int argc, char **argv)
{
    std::cout << "12_pass_by_value" << std::endl;

    sep();

    int age {34};

    std::cout << "You " << age << " years old." << std::endl;
    say_age(&age);
    std::cout << "You " << age << " years old." << std::endl;


    return 0;
}

void say_age(int * age) {
    ++(*age);
    std::cout << "You " << *age << " years old." << std::endl;
}