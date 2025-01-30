/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

clear && g++ -std=c++17 -o main -Wall main.cpp && ./main

 */

#include <iostream>

void sep() { std::cout << "-------------------------" << std::endl; }

void declaring_and_using_references()
{
    int x = 10;
    int &y = x;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    sep();

    x = 20;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    sep();

    y = 30;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

void demonstrate_references_and_pointers() {
    sep();

    std::cout << "demonstrate_references_and_pointers" << std::endl;



    int a = 10;
    int b = 20;

    // Ссылка
    int& ref = a; // Ссылка должна быть сразу инициализирована
    std::cout << "Ссылка ref: " << ref << std::endl; // Выводит 10
    ref = b; // Это изменяет значение a, но ссылка ref по-прежнему связана с a
    std::cout << "После изменения ref: " << a << std::endl; // Выводит 20

    // Указатель
    int* ptr = &a; // Указатель указывает на a
    std::cout << "Указатель ptr: " << *ptr << std::endl; // Разыменование указателя, выводит 20
    ptr = &b; // Теперь указатель указывает на b
    std::cout << "После изменения ptr: " << *ptr << std::endl; // Разыменование указателя, выводит 20
}

void comparing_references_to_pointers() {
    /*
    References
    • Don't use dereferencing for reading
    and writing
    • Can't be changed to reference
    something else
    • Must be initialized at declaration 
    
    Pointers
    • Must go through dereference operator
    to read/write through pointed to value
    • Can be changed to point somewhere
    else
    • Can be declared un-initialized (will
    contain garbage addresses)
    */


}

int main()
{
    std::cout << "References" << std::endl;

    declaring_and_using_references();
    demonstrate_references_and_pointers();

    return 0;
}