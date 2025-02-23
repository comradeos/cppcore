#ifndef POINT_H
#define POINT_H

class Point {
public:
    int x;
    int y;
    Point(int x, int y);
    void info();
private:
    std::string secret;
};

#endif