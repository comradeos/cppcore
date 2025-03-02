#include <iostream>
#include <string>
#include "includes/separator.h"

class Person {
    friend std::ostream & operator<<(std::ostream &os, const Person &p);

    protected: // теперь дочерний класс Relative имеет доступ
        std::string secret {"Person has a secret"};

    public:
        std::string name;
};

class Relative : public Person {
    public:
        std::string relation;

        void printSecret() {
            std::cout << "Secret: " << secret << std::endl;
        }
};

int main()
{
    std::cout << "32_friend" << std::endl;

    Relative r;

    r.name = "Iaroslav";
    r.relation = "brother";
    
    r.printSecret();

    return 0;
}