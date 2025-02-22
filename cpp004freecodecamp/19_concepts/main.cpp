#include <iostream>
#include <string>
#include "separator.h"

// concept synatx 1
template <typename T>
requires std::integral<T>
T io_add_1(T a, T b) 
{
    return a + b;
}

// concept synatx 2
template <std::integral T>
T io_add_2(T a, T b)
{
    return a + b;
}

// concept synatx 3
auto io_add_3(std:: integral auto a,std:: integral auto b)
{
    return a + b;
}

// concept synatx 4
template <typename T>
T io_add_4(T a, T b) requires std::integral<T>
{
    return a + b;
}

int main(int argc, char **argv)
{
    std::cout << "19_concepts" << std::endl;

    // A mechanism to place constraints on your template type parameters
    // Механізм для встановлення обмежень на параметри типу вашого шаблону
    // Механизм для накладання ограничений на параметры типа вашего шаблона

    sep();

    char a_0 {10};
    char a_1 {20};
    
    auto result_a = io_add_1(a_0, a_1);
    std::cout << "io_add_1 result_a: " << static_cast<int>(result_a) << std::endl;
    result_a = io_add_2(a_0, a_1);
    std::cout << "io_add_2 result_a: " << static_cast<int>(result_a) << std::endl;
    result_a = io_add_3(a_0, a_1);
    std::cout << "io_add_3 result_a: " << static_cast<int>(result_a) << std::endl;
    result_a = io_add_4(a_0, a_1);
    std::cout << "io_add_4 result_a: " << static_cast<int>(result_a) << std::endl;

    
    sep();

    int b_0 {11};
    int b_1 {5};
    auto result_b = io_add_1(b_0, b_1);
    std::cout << "io_add_1 result_b: " << result_b << std::endl;
    result_b = io_add_2(b_0, b_1);
    std::cout << "io_add_2 result_b: " << result_b << std::endl;
    
    sep();

    // double c_0 {11.1};
    // double c_1 {1.9};
    // auto result_c = io_sum(c_0,c_1); // Error std:: integral concept not satisfied.

    return 0;
}

/*
Core language concepts
same_as (C++20) - два типа, які є однаковими | определяет, являются ли два типа одинаковыми
derived_from (C++20) - один тип є похідним від іншого | определяет, является ли один тип производным от другого
convertible_to(C++20) - один тип може бути перетворений на інший | определяет, может ли один тип быть преобразован в другой
common_reference_with(C++20) - два типи мають спільну посилання | определяет, имеют ли два типа общее ссылание
common_with (C++20) - два типи мають спільні властивості | определяет, имеют ли два типа общие свойства
integral (C++20) - цілі числа | целые числа
signed_integral (C++20) - знакові цілі числа | знаковые целые числа
unsigned_integral (C++20) - беззнакові цілі числа | беззнаковые целые числа
floating_point (C++20) - числа з плаваючою комою | числа с плавающей запятой
*/