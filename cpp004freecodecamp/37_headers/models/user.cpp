#include "user.h"
#include "../includes/separator.h"

#include <iostream>

User::User(std::string name){
    this->name = name;
}

User::~User(){
    sep();
    std::cout << "User " << name << " destroyed" << std::endl;
}

void User::info(){
    std::cout << "User info: " << name << std::endl;
}
