/*

clear && g++ -std=c++11 -o main -Wall main.cpp && ./main

clear && g++ -std=c++17 -o main -Wall main.cpp && ./main

 */

#include <iostream>

void sep() { std::cout << "-------------------------" << std::endl;}

void conditional_programming() {
    sep();

    std::cout << "Conditional programming" << std::endl;
    
    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    if (red) {
        std::cout << "Stop" << std::endl;
    } else if (green) {
        std::cout << "Go" << std::endl;
    } else if (yellow) {
        std::cout << "Slow down" << std::endl;
    } else {
        std::cout << "Proceed with caution" << std::endl;
    }

    if (police_stop) {
        std::cout << "Stop" << std::endl;
    } else {
        std::cout << "Proceed with caution" << std::endl;
    }

    // switch

    int number = 2;

    switch (number)
    {
    case 1:
        std::cout << "One" << std::endl;
        break;

    case 2:
        std::cout << "Two" << std::endl;
        break;
    default:
        std::cout << "Not one or two" << std::endl;
        break;
    }

    // ternary operator

    int a = 10;
    int b = 20;

    int result = (a > b) ? a : b;

    std::cout << "result: " << result << std::endl;
}

void loops() {
    sep();

    std::cout << "Loops" << std::endl;

    // for loop

    for (int i = 0; i < 5; i++) {
        std::cout << "i: " << i << std::endl;
    }

    // while loop

    int i = 0;

    while (i < 5) {
        std::cout << "i: " << i << std::endl;
        i++;
    }

    // do while loop

    i = 0;

    do {
        std::cout << "i: " << i << std::endl;
        i++;
    } while (i < 5);
}

int main()
{
    std::cout << "03_flow_control" << std::endl;

    conditional_programming();

    loops();

    return 0;
}