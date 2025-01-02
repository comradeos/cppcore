#include <iostream>
#include "funcs.h"

void sep() {
    std::cout << "-------------------------" << std::endl;
}

void ints() {
    sep();

    // int elephant_count;
    // std::cout << "elephant_count " << elephant_count << std::endl; // warning

    int lion_count {};
    std::cout << "lion_count " << lion_count << std::endl; 
    
    int dog_count {10};
    std::cout << "dog_count " << dog_count << std::endl; 

    int cat_count {15};
    std::cout << "cat_count " << cat_count << std::endl; 

    int domestical_animals {dog_count + cat_count};
    std::cout << "domestical_animals " << domestical_animals << std::endl; 

    // int bad_init { non_exist1 + non_exist2} // err

    int narrowing_convertion {static_cast<int>(2.9)};
    std::cout << "narrowing_convertion " << narrowing_convertion << std::endl; 

    sep();

    int truck_count = 25;
    std::cout << "truck_count " << truck_count << std::endl; 

    std::cout << "size of truck_count " 
             << sizeof(truck_count) 
             << " bytes"
             << std::endl; 

    std::cout << "size of int " 
              << sizeof(int) 
              << " bytes"  
              << std::endl; 


    sep();

    std::cout << "positive and negative" << std::endl; 

    int num1 {10};
    int num2 {-300};
    std::cout << "num1 " << num1 << std::endl;
    std::cout << "num2 " << num2 << std::endl; 

    signed int num3 {20};
    signed int num4 {-400};
    std::cout << "num3 " << num3 << std::endl; 
    std::cout << "num4 " << num4 << std::endl; 

    unsigned int num5 {30};
    // unsigned int num6 {-600}; // err
    std::cout << "num5 " << num5 << std::endl; 
    // std::cout << "num6 " << num6 << std::endl;  //err 
}


void floats() {
    sep();
    std::cout << "floats" << std::endl;

    //Declare and initialize the variables
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    // std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number1 is: "<< number1 << std::endl; //7 digits
    std::cout << "number2 is: " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is: " << number3 << std::endl; // 15+ digits

    //Print out the sizes
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

}


