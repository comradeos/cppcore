#include <iostream>
#include <string>
#include "includes/separator.h"

class Dog 
{
    private: 
        std::string name;
        int * age {nullptr};
    public:
        Dog(std::string_view name_param, int age_param);
        ~Dog();
        
        // setters
        void set_dog_name(std::string_view name_param) { name = name_param; }
        void set_dog_age(int age_param) { *age = age_param; }

        // getters
        std::string get_dog_name() { return name; }
};

Dog::Dog(std::string_view name_param, int age_param)
{
    name = name_param;
    age = new int;
    *age = age_param;
    std::cout << "Contructor called for " << this << std::endl;
}

Dog::~Dog()
{
    delete age;
    std::cout << "Destructor called for " << this << std::endl;
}



int main(int argc, char **argv)
{
    std::cout << "28_this_pointer" << std::endl;

    sep();

    Dog dog1("Dog1", 5);

    dog1.set_dog_name("Dog2");

    dog1.set_dog_age(10);

    sep();

    std::cout << "Dog1 name: " << dog1.get_dog_name() << std::endl;

    std::cout << "Done" << std::endl;

    return 0;
}
