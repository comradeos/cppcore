/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

clear && g++ -std=c++17 -o main -Wall main.cpp && ./main

 */

#include <iostream>

void sep() { std::cout << "-------------------------" << std::endl; }

void string_manipulation()
{
    std::string greeting = "Hello";
    std::cout << greeting << std::endl;

    std::cout << greeting[0] << std::endl;

    greeting[0] = 'J';
    std::cout << greeting << std::endl;

    std::cout << greeting.length() << std::endl;

    greeting.append(" there!");
    std::cout << greeting << std::endl;

    greeting.erase(5, 3);
    std::cout << greeting << std::endl;

    greeting.find("there");
    std::cout << greeting << std::endl;

    greeting.replace(5, 3, "world");
    std::cout << greeting << std::endl;


    //Check if character is alphanumeric

    std::cout << isalnum('a') << std::endl;
    std::cout << isalnum('1') << std::endl;

    //Check if character is alphabetic

    std::cout << isalpha('a') << std::endl;
    std::cout << isalpha('1') << std::endl;

    //Check if character is lowercase

    std::cout << islower('a') << std::endl;
    std::cout << islower('A') << std::endl;

    //Check if character is uppercase

    std::cout << isupper('a') << std::endl;
    std::cout << isupper('A') << std::endl;

    //Check if character is digit

    std::cout << isdigit('a') << std::endl;
    std::cout << isdigit('1') << std::endl;

    //Find and print blank index

    std::string str = "Hello World";
    std::cout << str.find(" ") << std::endl; // 5 потому что пробел на 5 позиции

    // https://en.cppreference.com/w/cpp/header/cctype
}

void cstring_manipulation()
{
    sep();

    std::cout << "C-String Manipulation" << std::endl;

    sep();

    //  std::strlen : length of a string

    char name[] = "Caleb";
    std::cout << std::strlen(name) << std::endl;


}

int main()
{
    sep();

    std::cout << "Character Manipulation And Strings" << std::endl;

    sep();

    string_manipulation();

    cstring_manipulation();

    return 0;
}