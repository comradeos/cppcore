/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

 */

#include <iostream>

void sep() { std::cout << "-------------------------" << std::endl;}

void basic_operations() {
    std::cout << "Basic operations" << std::endl;

    std::cout << 5 + 5 << std::endl;
    std::cout << 5 - 5 << std::endl;
    std::cout << 5 * 5 << std::endl;
    std::cout << 5 / 5 << std::endl;
    std::cout << 5 % 5 << std::endl;

    sep();

    int q = 50;
    int w = 7;
    float x = 7.0f;

    std::cout << q / w << std::endl;
    std::cout << q % w << std::endl;

    std::cout << q / x << std::endl; // 7.142857 это норм
    // std::cout << a % c << std::endl; // это нет, почему? В C++ оператор % (остаток от деления) определен только для целочисленных типов. Попытка использовать оператор % с плавающими типами (float, double, long double) приведет к ошибке компиляции.


    // https://en.cppreference.com/w/cpp/language/operator_precedence

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = a + b * c -d/e -f + g;

    std:: cout << "result: " << result << std::endl;
}


void prefix_postfix() {
    sep();
    std::cout << "Prefix and Postfix + and -" << std::endl;

    int value {5};
    value = value + 1;
    std::cout << value << std::endl; // 6

    value = value - 1;
    std::cout << value << std::endl; // 5

    value++;
    std::cout << value << std::endl; // 6

    value--;
    std::cout << value << std::endl; // 5

    sep();
    value = 5;
    std::cout << value++ << std::endl; // потому что сначала выводим value, а потом увеличиваем на 1
    std::cout << value << std::endl; // 6

    value = 5;
    std::cout << ++value << std::endl; // 6 потому что сначала увеличиваем value на 1, а потом выводим
    
    
}


void compound_assignment() {
    sep();
    std::cout << "Compound assignment" << std::endl;

    int value {5};
    value += 1;
    std::cout << value << std::endl; // 6

    value -= 1;
    std::cout << value << std::endl; // 5

    value *= 2;
    std::cout << value << std::endl; // 10

    value /= 2;
    std::cout << value << std::endl; // 5

    value %= 2;
    std::cout << value << std::endl; // 1

    sep();
    value = 5;
    value += 3 * 4;
    std::cout << value << std::endl; // 17

    value = 5;
    value *= 3 + 4;
    std::cout << value << std::endl; // 35

    value = 5;
    value /= 3 + 4;
    std::cout << value << std::endl; // 0

    value = 5;
    value %= 3 + 4;
    std::cout << value << std::endl; // 1
}


void relational_operators() {
    sep();
    std::cout << "Relational operators" << std::endl;

    int a {10};
    int b {20};

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << std::boolalpha; // выводит true/false вместо 1/0
    std::cout << "a == b: " << (a == b) << std::endl; // false
    std::cout << "a != b: " << (a != b) << std::endl; // true
    std::cout << "a < b: " << (a < b) << std::endl; // true
    std::cout << "a > b: " << (a > b) << std::endl; // false
    std::cout << "a <= b: " << (a <= b) << std::endl; // true
    std::cout << "a >= b: " << (a >= b) << std::endl; // false

    // sep();
    // std::cout << "using no parentheses" << std::endl;
    // std::cout << a == b << std::endl; // - error! place parentheses around comparison expression to evaluate it first


}


void logical_operators() {
    sep();
    std::cout << "Logical operators" << std::endl;

    bool a {false};
    bool b {false};
    bool c {false};

    std::cout << std::boolalpha; // выводит true/false вместо 1/0
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << "a && b: " << (a && b) << std::endl; // false
    std::cout << "a || b: " << (a || b) << std::endl; // false
    std::cout << "!(a && b): " << !(a && b) << std::endl; // true
    std::cout << "!(a || b): " << !(a || b) << std::endl; // true

    // combining logical and relational operators
    std::cout << "a && b && c " << (a && b && c) << std::endl;
}


void output_formatting() {
    sep();
    std::cout << "Output formatting" << std::endl;

    // как из этого
    // Daniel Gray 25
    // Stanley Woods 33
    // Jordan Parker 45
    // Joe Ball 21
    // Josh Carr 27
    // Izaiah Robinson 29

    // сделать это
    // Daniel       Gray       25
    // Stanley      Woods      33
    // Jordan       Parker     45
    // Joe          Ball       21
    // Josh         Carr       27
    // Izaiah       Robinson   29

    // #include <ios> 
    // #include <iomanip>

    
}


int main()
{
    std::cout << "02_operations_on_data" << std::endl;
    sep();

    basic_operations();
    prefix_postfix();
    compound_assignment();
    relational_operators();
    logical_operators();

    return 0;
}