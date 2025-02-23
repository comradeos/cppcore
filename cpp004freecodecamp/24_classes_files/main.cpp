#include <iostream>
#include <string>
#include "includes/separator.h"
#include "includes/person.h"
#include "includes/constants.h"

int main(int argc, char **argv)
{
    std::cout << "24_classes_files" << std::endl;

    sep();

    std::cout << "PI is " << PI << std::endl;

    sep();
    
    Person p("Ярослав", 35);
    p.introduce();

    return 0;
}
