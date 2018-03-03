#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <iomanip>
using namespace std;

class Convert
{
    public:
        Convert();

        Convert(double t){
            temperature = t;
        }

        getTemperature(){
            return temperature;
        }
            void setTemperature(double t){
                temperature = t;
                }

    double CalcCels();
    double CalcFahr();

    private:
        double temperature;
};

#endif // CONVERT_H
