// g++ -o .\app .\02_hello_world.cpp ; .\app.exe ; del .\app.exe

#include <iostream>

using namespace std; 

int main(int argc, const char * argv[])
{
    cout << "hello world\n";
    
    char name[25];
    cin.get(name, 25);
    cout << name << "\n";

    system("pause");
    return 0;
}