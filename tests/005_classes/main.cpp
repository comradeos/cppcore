#include <iostream>
using namespace std;

class MyClass {
    public:
        string name;
        int id;

    void printName() {
        cout << "Name: " << this->name << endl;
    } 
};

class A {
    private: 
        int id = 1;
        string name = "default";
        
    public:
        ~A() {
            cout << "A obj created!" << endl;
        }

        int GetId() {
            return this->id;
        }

        string GetName() {
            return this->name;
        }

        void SetId(int id) {
            this->id = id;
        }

        void SetName(string name) {
            this->name = name;
        }
};

class B {
    public: int id = 25;
};

int main()
{
    /*
    MyClass obj;
    obj.name = "Name1";
    obj.printName();

    MyClass * ptr;
    ptr = &obj;
    ptr->name = "Name2";
    ptr->printName();
    */
    
    A a;
    a.SetId(7);
    a.SetName("NewName1");
    cout << a.GetId() << endl;
    cout << a.GetName() << endl;


    B b;
    cout << b.id << endl;

    return 0;
}

/*

g++ -o EnvTest -Wall EnvTest.cpp && EnvTest

*/