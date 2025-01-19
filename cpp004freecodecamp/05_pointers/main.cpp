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

void dungling_pointers() {
    sep();
    std::cout << "Dungling pointers" << std::endl;

    // Указатель, который указывает на память, которая была освобождена

    // Uninitialized pointer - неинициализированный указатель
    // пример
    int * p_number5; 
    // std::cout << *p_number5 << std::endl; // Ошибка


    // Deleted pointer - указатель, который был удален
    // пример
    int * p_number6 {new int};
    *p_number6 = 77;
    std::cout << "*p_number6: " << *p_number6 << std::endl;
    delete p_number6;
    // std::cout << "*p_number6: " << *p_number6 << std::endl; // Ошибка

    // Multiple pointers pointing to same memory - несколько указателей, указывающих на одну и ту же память
    // пример
    int * p_number7 {new int};
    int * p_number8 {p_number7};
    *p_number7 = 77;
    std::cout << "*p_number7: " << *p_number7 << std::endl;
    std::cout << "*p_number8: " << *p_number8 << std::endl;
    delete p_number7;
    // std::cout << "*p_number8: " << *p_number8 << std::endl; // Ошибка



    // Initialize your pointers - инициализируйте ваши указатели
    // Reset pointers after delete - сбросьте указатели после удаления
    // For multiple pointers to same address, - Для нескольких указателей на один и тот же адрес
    // make sure the owner pointer is very clear - убедитесь, что владелец указателя очень ясен
}

void when_new_fails() {
    sep();
    std::cout << "When new fails" << std::endl;

    // Try to allocate a insanely huge array in one go
    // Попробуйте выделить безумно огромный массив за один раз
    // Unhandled new failure : Crash
    // Необработанная ошибка new : Сбой
    // int* lots_of_ints1 { new int[1000000000000000000] }; // May give an error about - превышение размера массива.
                                                        // error about exceeding array size - 

    //Use a huge loop to try and exhaust the memory capabilities
    // Используйте огромный цикл, чтобы попытаться исчерпать возможности памяти
    //of your system. When new fails, your program is going to
    //forcefuly terminate.

    // for (size_t i{} ; i < 100000000000 ; ++i){
    //     int* lots_of_ints2 { new int[10000000] };
    // }

    try {
        int * data = new int[100000000000000000];
        std::cout << "data: " << data << std::endl;
    } catch (std::bad_alloc &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
}

void null_pointer_safety() {
    sep();
    
    std::cout << "Null pointer safety" << std::endl;

    int * p_number9 {};

    p_number9 = new int(7);

    if (!(p_number9==nullptr)) {
        std::cout << "p_number9 (puts to valid address): " << p_number9 << std::endl;
        std::cout << "*p_number9: " << *p_number9 << std::endl;
    } else {
        std::cout << "p_number9 (puts to nullptr): " << p_number9 << std::endl;
    }

    delete p_number9;
    p_number9 = nullptr;
}

void memory_leaks() {
    sep();
    std::cout << "Memory leaks" << std::endl;

    // Memory leaks - утечки памяти

    int * p_number {new int{7}}; // Выделяем память для одного int

    int number {55}; // Создаем обычную переменную
 
    p_number = &number; // Утечка памяти. Мы потеряли указатель на выделенную память для int 7

    
    sep();
    // другая ситуация утечки памяти


    
}

void q_tests() {
    sep();
    std::cout << "Q tests" << std::endl;

    int num_a = 10;

    std::cout << "num_a: " << num_a << std::endl;

    delete &num_a;
}





class MyClassA {
public:
    MyClassA() {
        std::cout << "Constructor MyClassA" << std::endl;
    }

    ~MyClassA() {
        std::cout << "Destructor MyClassA" << std::endl;
    }
};


void q_tests_2() {
    sep();
    std::cout << "Q tests 2" << std::endl;

    MyClassA myClassAOjb1 = MyClassA();
    delete &myClassAOjb1; // Ошибка 
    // https://chatgpt.com/share/678d40ed-563c-800a-a830-c1ee392f9fec
}


void array_dynamic_memory_allocation() {
    sep();
    std::cout << "Array dynamic memory allocation" << std::endl;

    size_t size {10}; // size_t - беззнаковый целочисленный тип

    double * p_salaries { new double[size]}; // Выделяем память для массива из 10 double, будем хранить мусор

    int * p_students { new(std::nothrow) int[size]}; // Выделяем память для массива из 10 int, все элементы будут равны 0

    double * p_scores { new double[size] {1,2,3,4,5}}; // Выделяем память для массива из 10 double, первые 5 элементов будут равны 1,2,3,4,5, остальные 0

    if (p_scores) {
        for (size_t i{}; i < size; ++i) {
            std::cout << "p_scores[" << i << "]: " << p_scores[i] << std::endl;
        }
    }

    // для того чтобы освободить память, выделенную для массива, нужно использовать оператор delete[] и указатель на первый элемент массива
    delete[] p_scores;
    p_scores = nullptr;
    

}


int main()
{
    std::cout << "Pointers" << std::endl;

    pointers();
    declaring_and_using_pointers();
    pointer_to_char();
    program_memory_map();
    dynamic_memory_allocation();
    dungling_pointers();
    when_new_fails();
    null_pointer_safety();
    memory_leaks();
    array_dynamic_memory_allocation();

    return 0;
}