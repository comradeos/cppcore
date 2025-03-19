#include <iostream>
// #include <thread>

int main () {
    int color = 91;

    while (1) {
        std::cout << "\033[" << color << "m" << " Hello, World! " << "\033[0m\r" << std::flush;
        
        color++;

        if (color > 97) {
            color = 91;
        }

        // std::this_thread::sleep_for(std::chrono::milliseconds(100));

        for (int i = 0; i < 100000000; i++){}
    }
}