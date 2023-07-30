#include <iostream>

using namespace std;

class A {
    public:
        int id = 1;
        string name = "Default Name";

        A() {
            this->id = 25;
            cout << "A obj created!" << endl;
        }
};

int main() {
    A a;
    cout << a.id << endl;
    cout << a.name << endl;
    return 0;
}
