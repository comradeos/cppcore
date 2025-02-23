#include <iostream>
#include "point.h"

Point::Point(int in_x, int in_y) : x(in_x), y(in_y) {
    secret = "I am a secret";
};

void Point::info() {
    std::cout << "Point: (" << x << ", " << y << ")" << std::endl;
    std::cout << "Secret: " << secret << std::endl;
}