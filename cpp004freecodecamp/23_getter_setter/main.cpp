#include <iostream>
#include <string>
#include "separator.h"

class Point {
private:
    int x {1};
    int y {1};
public:
    Point() = default;
    void print() {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
    int getX() {
        return x;
    }
    void setX(int x) {
        this->x = x;
    }
    int getY() {
        return y;
    }
    void setY(int y) {
        this->y = y;
    }
};

int main(int argc, char **argv)
{
    std::cout << "23_getter_setter" << std::endl;

    sep();

    Point point;

    point.print();

    point.setX(3);
    point.setY(4);

    point.print();

    return 0;
}
