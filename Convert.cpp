#include "Convert.h"

double Convert::CalcCels(){
    return temperature * (9.0 / 5.0) + 32.0;
}
double Convert::CalcFahr(){
    return (temperature - 32.0) * 5.0 / 9.0;
}

