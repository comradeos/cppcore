/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

 */

#include <iostream>
#include <iomanip>
#include <cmath>


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

    std::cout << "Daniel" << "Gray" << 25 << std::endl;
    std::cout << "Stanley" << "Woods" << 33 << std::endl;
    std::cout << "Jordan" << "Parker" << 45 << std::endl;
    std::cout << "Joe" << "Ball" << 21 << std::endl;
    std::cout << "Josh" << "Carr" << 27 << std::endl;
    std::cout << "Izaiah" << "Robinson" << 29 << std::endl;

    sep();
    std::cout << std::setw(10) << std::left << "Daniel" << std::setw(10) << std::left << "Gray" << std::setw(5) << std::right << 25 << std::endl;
    std::cout << std::setw(10) << std::left << "Stanley" << std::setw(10) << std::left << "Woods" << std::setw(5) << std::right << 33 << std::endl;
    std::cout << std::setw(10) << std::left << "Jordan" << std::setw(10) << std::left << "Parker" << std::setw(5) << std::right << 45 << std::endl;
    std::cout << std::setw(10) << std::left << "Joe" << std::setw(10) << std::left << "Ball" << std::setw(5) << std::right << 21 << std::endl;
    std::cout << std::setw(10) << std::left << "Josh" << std::setw(10) << std::left << "Carr" << std::setw(5) << std::right << 27 << std::endl;
    std::cout << std::setw(10) << std::left << "Izaiah" << std::setw(10) << std::left << "Robinson" << std::setw(5) << std::right << 29 << std::endl;

    sep();
    std::cout << std::setw(10) << std::right << "Daniel" << std::setw(10) << std::right << "Gray" << std::setw(5) << std::right << 25 << std::endl;
    std::cout << std::setw(10) << std::right << "Stanley" << std::setw(10) << std::right << "Woods" << std::setw(5) << std::right << 33 << std::endl;
    std::cout << std::setw(10) << std::right << "Jordan" << std::setw(10) << std::right << "Parker" << std::setw(5) << std::right << 45 << std::endl;
    std::cout << std::setw(10) << std::right << "Joe" << std::setw(10) << std::right << "Ball" << std::setw(5) << std::right << 21 << std::endl;
    std::cout << std::setw(10) << std::right << "Josh" << std::setw(10) << std::right << "Carr" << std::setw(5) << std::right << 27 << std::endl;
    std::cout << std::setw(10) << std::right << "Izaiah" << std::setw(10) << std::right << "Robinson" << std::setw(5) << std::right << 29 << std::endl;

    sep();
    std::cout << std::setfill('-');
    std::cout << std::setw(10) << std::left << "Daniel" << std::setw(10) << std::left << "Gray" << std::setw(5) << std::right << 25 << std::endl;
    std::cout << std::setw(10) << std::left << "Stanley" << std::setw(10) << std::left << "Woods" << std::setw(5) << std::right << 33 << std::endl;
    std::cout << std::setw(10) << std::left << "Jordan" << std::setw(10) << std::left << "Parker" << std::setw(5) << std::right << 45 << std::endl;
    std::cout << std::setw(10) << std::left << "Joe" << std::setw(10) << std::left << "Ball" << std::setw(5) << std::right << 21 << std::endl;
    std::cout << std::setw(10) << std::left << "Josh" << std::setw(10) << std::left << "Carr" << std::setw(5) << std::right << 27 << std::endl;
    std::cout << std::setw(10) << std::left << "Izaiah" << std::setw(10) << std::left << "Robinson" << std::setw(5) << std::right << 29 << std::endl;
    /*
    Daniel----Gray---------25
    Stanley---Woods--------33
    Jordan----Parker-------45
    Joe-------Ball---------21
    Josh------Carr---------27
    Izaiah----Robinson-----29
    */

    sep();
    //    std::boolalpha
    bool boolValue {true};
    std::cout << std::boolalpha << boolValue << std::endl; // true
    std::cout << std::noboolalpha << boolValue << std::endl; // 1

    sep();
    // std::showpos
    int intValue {10};
    std::cout << std::showpos << intValue << std::endl; // +10
    intValue = -10;
    std::cout << std::noshowpos << intValue << std::endl; // 10

    sep();
    // std:: dec std::oct and std::hex
    intValue = 30;
    std::cout << std::dec << intValue << std::endl; // 30
    std::cout << std::oct << intValue << std::endl; // 36
    std::cout << std::hex << intValue << std::endl; // 1e

    sep();
    // std::showbase
    intValue = 3850;  
    std::cout << std::showbase << std::dec << intValue << std::endl; // 30
    std::cout << std::showbase << std::oct << intValue << std::endl; // 036
    std::cout << std::showbase << std::hex << intValue << std::endl; // 0x1e

    sep();
    // std::scientific - std::fixed
    double doubleValue {123456789.987654321};
    std::cout << std::scientific << doubleValue << std::endl; // 1.234568e+08
    std::cout << std::fixed << doubleValue << std::endl; // 123456789.987654

    sep();
    // std::setprecision
    doubleValue = 123.456789;
    std::cout << std::setprecision(2) << doubleValue << std::endl; // 123.46
    std::cout << std::setprecision(3) << doubleValue << std::endl; // 123.457
    std::cout << std::setprecision(4) << doubleValue << std::endl; // 123.4568

    std::cout << std::dec << std::endl;
}

void std_flush() {
    sep();
    
    std::string message = "Hello, World!";

    std::cout << message << std::endl << std::flush;
}

void math_functions() {
    // #include <cmath>
    sep();
    std::cout << "Math functions" << std::endl;

    double value {7.7};

    std::cout << "value: " << value << std::endl; // 7.7 
    std::cout << "sqrt(value): " << sqrt(value) << std::endl; // 2.77489 квадратный корень
    std::cout << "cbrt(value): " << cbrt(value) << std::endl; // 1.92261 кубический корень
    std::cout << "pow(value, 2): " << pow(value, 2) << std::endl; // 59.29 возведение в степень
    std::cout << "pow(value, 3): " << pow(value, 3) << std::endl; // 456.533 возведение в степень
    std::cout << "pow(10, 3): " << pow(10, 3) << std::endl; // 1000 возведение в степень
    std::cout << "pow(10, 3): " << pow(10.0, 3.0) << std::endl; // 1000 возведение в степень
    std::cout << "abs(-10): " << abs(-10) << std::endl; // 10 абсолютное значение 
    std::cout << "abs(10): " << abs(10) << std::endl; // 10 абсолютное значение
    std::cout << "ceil(value): " << ceil(value) << std::endl; // 8 округление вверх
    std::cout << "floor(value): " << floor(value) << std::endl; // 7 округление вниз
    std::cout << "round(value): " << round(value) << std::endl; // 8 округление
    std::cout << "trunc(value): " << trunc(value) << std::endl; // 7 отбрасывание дробной части
    std::cout << "fmax(10, 20): " << fmax(10, 20) << std::endl; // 20 максимальное значение
    std::cout << "fmin(10, 20): " << fmin(10, 20) << std::endl; // 10 минимальное значение
    std::cout << "fmax(10.5, 20.5): " << fmax(10.5, 20.5) << std::endl; // 20.5 максимальное значение
    std::cout << "fmin(10.5, 20.5): " << fmin(10.5, 20.5) << std::endl; // 10.5 минимальное значение
    std::cout << "fmax(10.5, 10.5): " << fmax(10.5, 10.5) << std::endl; // 10.5 максимальное значение
}

void weird_integral_types() {
    sep();
    std::cout << "Weird integral types" << std::endl;

    short int val1 {10};
    short int val2 {20};

    std::cout << "val1: " << val1 << std::endl; // 10 0x000a
    std::cout << "val2: " << val2 << std::endl; // 20 0x0014

    std::cout << "sizeof(short int): " << sizeof(short int) << std::endl;
    
    auto result = val1 + val2;
    std::cout << "result: " << result << std::endl; // 30 0x001e
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
    output_formatting();
    std_flush();
    math_functions();
    weird_integral_types();

    return 0;
}