/*

clear && g++ -std=c++17 -o main -Wall main.cpp && ./main

 */

#include <iostream>
#include <string>

void sep() { std::cout << "-------------------------" << std::endl; }

void enter_bar(unsigned int age){
    sep();

    if (age > 10){
        std::cout << "You're " << age << " years old. Please proceed." << std::endl;
    } else {
        std:: cout << "Sorry, you're too young for this. No offense! " << std::endl;
    }
}

// Function Declaration & Definition

int max(int a, int b);

int main()
{
    std::cout << "Functions" << std::endl;

    enter_bar(10);
    enter_bar(20);
    
    int m = max(1, 2);
    std::cout << "Max: " << m << std::endl;

    return 0;
}

int max(int a, int b){
    return a > b ? a : b;
}