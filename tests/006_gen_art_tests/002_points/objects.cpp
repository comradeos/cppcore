#include <iostream>
#include <string>

class Point {
public:
    int x, y, z;

    Point(int x, int y, int z) : x(x), y(y), z(z) {}

    void info() const {
        std::cout << "Point(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

class Line {
public:
    Point p1, p2;

    Line(Point p1, Point p2) : p1(p1), p2(p2) {}

    void info() const {
        std::cout << "Line(";
        p1.info();
        std::cout << ", ";
        p2.info();
        std::cout << ")" << std::endl;
    }
};