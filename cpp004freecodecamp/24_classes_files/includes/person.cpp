#include "person.h"
#include <iostream>

Person::Person(const std::string& name, int age) : name(name), age(age) {}

void Person::introduce() {
    std::cout << "Привет, меня зовут " << name << " и мне " << age << " лет." << std::endl;
}
