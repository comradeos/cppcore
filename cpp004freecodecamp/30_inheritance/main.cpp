#include <iostream>
#include <string>
#include "includes/separator.h"

class Person {
    public:
        std::string name;
        void name_info(){
            std::cout << "hello, my name is " << name << std::endl;
        }
};

class Engineer : public Person {
    public: 
        std::string job;
        void job_info(){
            std::cout << "i am an " << job << std::endl;
        }
};



int main(int argc, char **argv)
{
    std::cout << "30_inheritance" << std::endl;

    sep();

    Engineer e;
    e.name = "Iaroslav Os";
    e.job = "engineer";

    e.name_info();
    e.job_info();

    return 0;
}
