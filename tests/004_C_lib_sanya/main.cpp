#include <iostream>

extern "C" 
{ 
    #include "dac_calc.h" 
}

using namespace std;

int main()
{
    int dac_result = SetVoltage(3000);
    cout << "dac_result " << dac_result; 
    return 0;
}
