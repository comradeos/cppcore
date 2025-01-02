#include <iostream>

int addNumbers(int firs_number, int second_number) { // function
    int sum = firs_number + second_number;
    return sum;
}

int main() {
    int firstNumber = 12;
    int secondNumber = 9;
    int sum = addNumbers(firstNumber, secondNumber);

    std::cout << "sum: " <<  sum << std::endl;
    std::cout << "sum: " <<  addNumbers(1,2) << std::endl;
    std::cout << "sum: " <<  addNumbers(2,3) << std::endl;
    std::cout << "sum: " <<  addNumbers(4,5) << std::endl;

    int first_number {3}; // statement
    int second_number {7};

    std::cout << "first_number: " <<  first_number << std::endl;
    std::cout << "second_number: " <<  second_number << std::endl;

    sum = first_number + second_number;
    std::cout << "sum: " <<  sum << std::endl;
    
    return 0;
}