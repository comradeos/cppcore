
// C++ program to display "Hello World"
 
// Header file for input output functions
// extern "C" { 
//     #include "dac_calc.h" 
//     }
#include <iostream>
#include "dac_calc.h"

using namespace std;

int main() {

         // Program code here
         int dac_result = SetVoltage (3000);

         cout << "dac_result " << dac_result; 

         return 0;

}
