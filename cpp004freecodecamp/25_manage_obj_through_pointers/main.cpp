#include <iostream>
#include <string>
#include "includes/separator.h"
#include "includes/point.h"

int main(int argc, char **argv)
{
    std::cout << "25_manage_obj_through_pointers" << std::endl;

    sep();

    Point point1(10, 20);
    point1.info();

    Point * p_point1 = &point1;
    p_point1->x = 100;
    p_point1->y = 200;
    
    sep();
    
    p_point1->info(); // or

    sep();

    (*p_point1).info();

    Point * p_point2 = new Point(30, 40);
    p_point2->info();
    delete p_point2; // free memory
    
    return 0;
}
