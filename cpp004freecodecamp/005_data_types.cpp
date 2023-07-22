#include <iostream>
#include <string>

using namespace std;

int main(int agrc, char ** argv) {
    int num_1 = 15;
    cout << "num_1 (decimal): " << num_1 << endl;

    int num_2 = 017;
    cout << "num_2 (octal): " << num_2 << endl;

    int num_3 = 0x0f;
    cout << "num_2 (hex): " << num_3 << endl;

    int num_4 = 0b0001111;
    cout << "num_4 (binary): " << num_4 << endl;


    return 0;
}