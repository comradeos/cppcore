#include <iostream>
#include <string>
#include "separator.h"

class Person
{
public:
    std::string name;
    int age;
    Person(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Person()
    {
        this->name = "Iaroslav Os";
        this->age = 35;
    }
    void sayHello()
    {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

class Point {
public:
    int x {1};
    int y {1};
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    Point() = default;
    void print() {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main(int argc, char **argv)
{
    std::cout << "22_classes" << std::endl;

    sep();

    Person person("John", 25);
    person.sayHello();

    sep();

    Person person2;
    person2.sayHello();

    sep();

    Point point(3, 4);
    point.print();

    sep();

    Point point2;
    point2.print();

    return 0;
}
