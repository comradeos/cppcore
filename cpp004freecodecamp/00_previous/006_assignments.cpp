#include <iostream>
#include <string>

using namespace std;

int main(int agrc, char ** argv) {
    cout << "Assignment 1" << endl;

    int num1{5};
    cout << "num1: " << num1 << " size: " << sizeof(num1) << endl;

    int num2{};
    cout << "num2: " << num2 << " size: " << sizeof(num2) << endl;

    int num3;
    cout << "num3: " << num3 << " size: " <<sizeof(num3) << endl;

    int num4 = 7;
    cout << "num4: " << num4 << " size: " <<sizeof(num4) << endl;

    int num5(8);
    cout << "num5: " << num5 << " size: " <<sizeof(num5) << endl;

    return 0;
}

// clang++ 006_assignments.cpp -std=c++11 -o app && ./app
