
#include "dac_calc.h"

int MAX_DAC_VOLTAGE_VAL = 4095;
int MAX_VOLTAGE = 3300;

float PERCENT_VAL = 100;
float ONE_PER_DAC_VAL;
float ONE_PER_MAX;
float SET_PER_USER;

//function DAC calculated set voltage return convert you voltage to DAC
int SetVoltage (int SET_VOLTAGE_USER) {
	 int SET_VOLTAGE_DAC = 0;
	 ONE_PER_DAC_VAL = MAX_DAC_VOLTAGE_VAL/PERCENT_VAL;
	 ONE_PER_MAX = MAX_VOLTAGE/PERCENT_VAL;
	 SET_PER_USER = SET_VOLTAGE_USER/ONE_PER_MAX;
	 SET_VOLTAGE_DAC = roundf(SET_PER_USER * ONE_PER_DAC_VAL);
	 return SET_VOLTAGE_DAC;
}
