/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

clear && g++ -std=c++17 -o main -Wall main.cpp && ./main

 */

#include <iostream>
#include <string>

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

    //Print out the comparison
    sep();
    char name1[] = "Caleb";
    const char * name2 {"Caleb"};

    std::cout << std::strcmp(name1, name2) << std::endl;
    sep();
    const char* string_datal{ "Alabama" };
    const char* string_data2{ "Blabama" };

    std::cout << std::strcmp(string_datal, string_data2) << std::endl;

    // std::strcpy : copy a string

    char name3[10];
    std::strcpy(name3, name1);

    std::cout << name3 << std::endl;


    // C-string Concatenation and
    // Copying
    sep();
    std::cout << "C-string Concatenation and Copying" << std::endl;
    sep();

    // std::strcat : Joining strings
    std::cout << "std::strcat : Joining strings" << std::endl;
   
    char name4[10] = "Caleb";
    char name5[10] = "Curry";

    std::strcat(name4, name5);
    std::cout << name4 << std::endl;
}

void std_string() {
    sep();
    // Introducing std::string
    std::cout << "Introducing std::string" << std::endl;

    // Declaring and using std::string
    std::cout << "Declaring and using std::string" << std::endl;
    std::string name = "Caleb";
    std::cout << "name: " <<  name << std::endl;

    std::string name1 = "Caleb";
    std::string name2 {"Curry"};
    std::cout << name1 + " " + name2 << std::endl;
}

int main()
{
    sep();

    std::cout << "Character Manipulation And Strings" << std::endl;

    sep();

    string_manipulation();

    cstring_manipulation();

    std_string();

    return 0;
}