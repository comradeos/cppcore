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


int main()
{
    std::cout << "02_operations_on_data" << std::endl;
    sep();

    basic_operations();
    prefix_postfix();

    return 0;
}