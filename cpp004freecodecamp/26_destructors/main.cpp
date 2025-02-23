#include <iostream>
#include <string>
#include "includes/separator.h"

class Point {
    private :
        int * secret = new int;
    public:
        int x;
        int y;

        Point(int inX, int inY, int inSecret) {
            std::cout << "Constructor called" << std::endl;
            x = inX;
            y = inY;
            *secret = inSecret;
        }

        ~Point() {
            std::cout << "Destructor called" << std::endl;
            delete secret;
        }

        void info() {
            std::cout << "Point: (" << x << ", " << y << ")" << std::endl;
        }
};

int main(int argc, char **argv)
{
    std::cout << "26_destructors" << std::endl;

    sep();

    Point * p_point1 = new Point(10, 20, 30);
    p_point1->info();
    delete p_point1; // вызов деструктора

    return 0;
}
