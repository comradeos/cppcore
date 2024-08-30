#include <iostream>
#include "cpplib.hpp"

using namespace std;

int main()
{
    cppLibHello();
    int result = cppLibSum(3, 4);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

/*

g++ -o main main.cpp cpplib.cpp

g++ -shared -o cpplib.so -fPIC cpplib.cpp

*/