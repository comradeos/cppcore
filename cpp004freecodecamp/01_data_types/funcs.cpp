#include <iostream>
#include "funcs.h"
#include <iomanip>

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

    number1 = 1;
    number2 = 0;
    number3 = number1 / number2;
    std::cout << "number3 is: " << number3 << std::endl; // inf (infinity)
    
    number1 = -1;
    number2 = 0;
    number3 = number1 / number2;
    std::cout << "number3 is: " << number3 << std::endl; // -inf (negative infinity)
   
    number1 = 0;
    number2 = 0;
    number3 = number1 / number2;
    std::cout << "number3 is: " << number3 << std::endl; // nan (not a number)

    float f1 = 10.1234213455343242341234f; // 10.1234213
    double d1 = 10.1234213455343242341234; // 10.123421345534324
    long double ld1 = 10.1234213455343242341234L; // 10.123421345534324234

    
    std::cout << std::setprecision(20);  // Control the precision from std::cout.
    std::cout << "f1: " << f1 << std::endl;
    std::cout << "d1: " << d1 << std::endl;
    std::cout << "ld1: " << ld1 << std::endl; // 10.1234 ? почему не 10.1234213455343242341234

    float a = 1.0f;
    float b = 0.0f;
    float c = a / b;
    float d = -c;
    std::cout << "c: " << c << " type: " << typeid(c).name() << std::endl; // inf
    std::cout << "d: " << d << " type: " << typeid(d).name() << std::endl; // -inf

    auto e = c + d;
    std::cout << "e: " << e << " type: " << typeid(e).name() << std::endl; // nan

}


void bools() {
    sep();
    std::cout << "bools" << std::endl;

    bool b1 {true};
    bool b2 {false};

    std::cout << "b1: " << b1 << std::endl;
    std::cout << "b2: " << b2 << std::endl;

    std::cout << std::boolalpha; // Change the output of bools to true/false
    std::cout << "b1: " << b1 << std::endl;
    std::cout << "b2: " << b2 << std::endl;

    std::cout << std::noboolalpha; // Change the output of bools to 1/0
    std::cout << "b1: " << b1 << std::endl;
    std::cout << "b2: " << b2 << std::endl;

    std::cout << std::boolalpha; // Change the output of bools to true/false
    std::cout << "b1: " << b1 << std::endl;
    std::cout << "b2: " << b2 << std::endl;

    bool ab1 = true;
    bool ab2 = false;
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;
    std::cout << "sizeof(ab1): " << sizeof(ab1) << std::endl;
    std::cout << "sizeof(ab2): " << sizeof(ab2) << std::endl;
}


void chars() {
    sep();
    std::cout << "chars" << std::endl;

    char c1 {'A'};
    char c2 {'B'};
    char c3 {'C'};

    std::cout << "c1: " << c1 << std::endl; // A
    std::cout << "c2: " << c2 << std::endl; // B
    std::cout << "c3: " << c3 << std::endl; // C

    char c4 = 70;
    char c5 = 71;
    char c6 = 72;

    std::cout << "c4: " << c4 << std::endl; // F
    std::cout << "c5: " << c5 << std::endl; // G
    std::cout << "c6: " << c6 << std::endl; // H
    std::cout << "static_cast<int>(c6): " << static_cast<int>(c6) << std::endl; // один из операторов приведения типов в C++ 72
}


void autos() {
    sep();
    std::cout << "autos" << std::endl;

    auto a1 = 10;
    // ptint value and type
    std::cout << "a1: " << a1 << " type: " << typeid(a1).name() << std::endl;

    auto a2 = 10.0;
    std::cout << "a2: " << a2 << " type: " << typeid(a2).name() << std::endl;

    auto a3 = 'A';
    std::cout << "a3: " << a3 << " type: " << typeid(a3).name() << std::endl;


    //Auto type deduction
    //Careful about auto assignments
    auto var3 {333u}; // Declare and initialize with type deduction
    var3 = -22; // Assign negative number. DANGER!
    std:: cout << "var3: "<< var3 << std::endl; // garbage because of the assignment of a negative number to an unsigned int
}


