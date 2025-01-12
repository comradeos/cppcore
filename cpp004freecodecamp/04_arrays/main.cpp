/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

clear && g++ -std=c++17 -o main -Wall main.cpp && ./main

 */

#include <iostream>

void sep() { std::cout << "-------------------------" << std::endl;}

void size_of_an_array() {
    sep();

    std::cout << "Size of an array" << std::endl;

    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "size: " << size << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
    }

    sep();

    //тольео начиная с C++17

    int scores [] {10,12,15,11,18,17,22,23, 24};
    
    // std::cout << "scores size: " << std::size(scores) << std::endl; // получение размера массива

    // for (size_t i{0}; i < std::size(scores); ++i) {
    //     std::cout << "scores["<< i <<"]: "<< scores[i] << std::endl;
    // }

    sep();
    // for (const auto &score : scores)
    std::cout << "(const auto &score : scores)" << std::endl;

    for (const auto &score : scores) {
        std::cout << "score: " << score << std::endl;
    }

}

void array_of_characters() {
    sep();

    std::cout << "Array of characters" << std::endl;

    char name[] = "John";

    std::cout << "name: " << name << std::endl;

    sep();

    int nums[5] {1,2,3,4,5};

    for (int &num : nums) {
        std::cout << "num: " << num << std::endl;
    }

    sep();

    std::cout << "nums[4]: " << nums[4] << std::endl;
    std::cout << "nums[7]: " << nums[7] << std::endl;



}

int main()
{
    std::cout << "Arrays" << std::endl;

    size_of_an_array();

    array_of_characters();

    return 0;
}