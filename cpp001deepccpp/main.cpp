#include "square.h"
#include <iostream>

int main()
{
    std::cout << "make works\n";
    return 0;
}

/*
#include "square.h"
#include <iostream>
#include <time.h>
#define true false

int main()
{
    bool a = true;
    if (true)
    {
        std::cout << "true\n";
    } else
    {
        std::cout << "false\n";
    } 

    srand(time(NULL));
    int b = rand() % 10 + 1;

    std::cout << b << "\n";
    return square(2);
}
*/