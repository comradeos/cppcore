#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person 
{
public:
    Person(std::string name, int age);
    void print_info()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
    
public:
    static int counter;
};

#endif