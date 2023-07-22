#include <iostream>
#include <string>

int main(int agrc, char ** argv) {
    std::cout << "Name: ";
    std::string name;
    // std::cin >> name; // grab one word
    std::getline(std::cin, name);

    std::cout << "Age: ";
    int age;
    std::cin >> age;

    // grab in one line 
    // std::cin >> name >> age;

    std::cout << "Hello, " << name << ". You are " 
              << age << " years old!" << std::endl;
    
    return 0;
}