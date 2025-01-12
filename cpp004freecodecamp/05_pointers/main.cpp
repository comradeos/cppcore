/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

clear && g++ -std=c++17 -o main -Wall main.cpp && ./main

 */

#include <iostream>

void sep() { std::cout << "-------------------------" << std::endl; }

void pointers() {
    int num = 10;
    std::cout << "num: " << num << std::endl;
    int *pNum = &num;
    int **ppNumn = &pNum;
    int ***pppNum = &ppNumn;

    ***pppNum = 20;
    std::cout << "num: " << num << std::endl;

}

void declaring_and_using_pointers() {
    sep();
    std::cout << "Declaring and using pointers" << std::endl;

    int num = 10;

    std::cout << "num: " << num << std::endl;

    int *pNum = &num;

    std::cout << "pNum: " << pNum << std::endl;

    std::cout << "*pNum: " << *pNum << std::endl;

    *pNum = 20;

    std::cout << "num: " << num << std::endl;

    sep();

    int * p_number {};
    std::cout << "p_number: " << p_number << std::endl; // 0

    int * p_number2 {nullptr};
    std::cout << "p_number2: " << p_number2 << std::endl; // 0

    sep();

    int *p, n {};
    std::cout << "p: " << p << std::endl; // 0x10050af50
    std::cout << "n: " << n << std::endl; // 0

    int *p1, *n1 {};
    std::cout << "p1: " << p1 << std::endl; // 0x10050beb2
    std::cout << "n1: " << n1 << std::endl; // 0

    int *n2 {};
    std::cout << "n2: " << n2 << std::endl; // 0
}

void pointer_to_char() {
    sep();
    std::cout << "Pointer to char" << std::endl;

    // char name[] = "John";
    // char *pName = name;
    // std::cout << "pName: " << pName << std::endl; // John ? почему? 

    char ch1 {'A'};
    char *pCh1 = &ch1;
    std::cout << "pCh1: " << pCh1 << std::endl;
    std::cout << "pCh1: " << *pCh1 << std::endl;
}

void program_memory_map() {
    sep();
    std::cout << "Program memory map" << std::endl;

    int num = 10;
    int *pNum = &num;

    std::cout << "num: " << num << std::endl;
    std::cout << "&num: " << &num << std::endl;
    std::cout << "pNum: " << pNum << std::endl;
    std::cout << "*pNum: " << *pNum << std::endl;
}

void dynamic_memory_allocation() {
    sep();
    std::cout << "Dynamic memory allocation" << std::endl;

    // Инициализируем указатель динамической памятью. Динамически выделяем
    // память во время выполнения и делаем указатель указывающим на нее

    int * p_number4 {nullptr};
    p_number4 = new int; // Динамически выделяем место для одного int в куче
                         // Эта память теперь принадлежит нашей программе. Система
                         // не может использовать ее для чего-либо еще, пока мы не вернем ее.
                         // После выполнения этой строки у нас будет действительное местоположение памяти
                         // выделено. Размер выделенной памяти будет таким, чтобы
                         // она могла хранить тип, на который указывает указатель

    * p_number4 = 77; // Запись в динамически выделенную память
    std:: cout << std::endl;
    std::cout << "Динамическое выделение памяти : " << std::endl;
    std:: cout <<"*p_number4: " << *p_number4 <<std::endl;

    // Не забудьте освободить выделенную память
    delete p_number4;
    p_number4 = nullptr; // Обнуляем указатель после освобождения памяти
}

int main()
{
    std::cout << "Pointers" << std::endl;

    pointers();
    declaring_and_using_pointers();
    pointer_to_char();
    program_memory_map();
    dynamic_memory_allocation();

    return 0;
}