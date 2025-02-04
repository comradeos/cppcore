/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

clear && g++ -std=c++17 -o main -Wall main.cpp && ./main

 */

// Definitions can't show up more than once in entire program, or Translation units.
// Определения не могут появляться более одного раза во всей программе или единицах трансляции.

#include <iostream>
#include "Person.h"

void sep() { std::cout << "-------------------------" << std::endl; }

double weight {}; // declaration and definition

void print_weight(double val)
{
    double weight { val };
    std::cout << "weight: " << weight << std::endl;
}

void print_weight(double val1, double val2) // overloaded function
{
    double weight1 { val1 };
    double weight2 { val2 };

    std::cout << "weight1: " << weight1 << std::endl;
    std::cout << "weight2: " << weight2 << std::endl;
}

struct  Point
{
    double x;
    double y;
};


int main()
{
    sep();
    std::cout << "weight: " << weight << std::endl;
    
    print_weight(3.1);

    Person person("Caleb", 30);
    person.print_info();

    return 0;
}