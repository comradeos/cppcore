#include <iostream>
using namespace std;

// g++ -o main -Wall main.cpp && ./main A B C 25 73 Hello

int main(int argc, char * argv[]) {
    cout << "Number of arguments: " << argc << endl;

    for (int i = 0; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    return 0;
}

// Argument 0: ./main
// Argument 1: A
// Argument 2: B
// Argument 3: C
// Argument 4: 25
// Argument 5: 73
// Argument 6: Hello
