#include <iostream>
#include "Convert.h"

using namespace std;
/*Lab 3 - Temperature Converter
-----------------------------------------
Write a program that converts temperature from the Fahrenheit to the Celsius temperature scale as well as from the Celsius to the Fahrenheit temperature scale.

1. The formula for converting from the Fahrenheit to the Celsius scale is: Celsius = (Fahrenheit - 32) * 5 / 9
2. The formula for converting from the Celsius to the Fahrenheit scale is: Fahrenheit = Celsius * (9 / 5) + 32

General Approach
------------------------
1. Prompt the user to enter the temperature to be converted. The temperature can be zero or a positive or negative floating point number.
2. Prompt the user to enter the temperature scale (Celsius or Fahrenheit).
3. If the scale of the temperature entered is Celsius, convert it to Fahrenheit. If the scale of the temperature entered is Fahrenheit, convert it to Celsius.
4. Display the converted temperature with two decimal points of precision.

Test Cases
------------------------------------------------------
-273.15C = -459.67F (absolute zero)
          0C =         32F (freezing water)
        21C =      69.8F (room temperature)
        37C =      98.6F (body temperature)
      100C =       212F (boiling water)
    1000C =     1832F (really hot)

Submit your solution (main.cpp) as the file lab3_annnnnnn.cpp where annnnnnn is your ACC student identification number. */

int main(int argc, char** argv) {
	double temperature;
	char repeat='y';
	char converting;

	cout << "Temperature Converted" << endl;
	cout << "------------------------" << endl;
	cout << "The program converts temperature \n";
	cout << "from C to F and from F to C \n";
	cout << "---------------------------" << endl;



	while(tolower(repeat) != 'n') {
		cout << "Temperature? " << endl;
		cin.clear(); cin.sync(); cin >> temperature;

		Convert conv(temperature);

		cout << "For C to F enter 'C' or 'c'\n";
		cout << "For F to C enter 'F' or 'f'\n" << endl;
		cin.clear(); cin.sync(); cin >> converting;

		switch (converting){
		    case 'c':
            case 'C': cout << setprecision(5) << temperature << " degrees Celsius is " << conv.CalcCels() << " degrees Fahrenheit" << endl;
                    break;
            case 'f':
            case 'F': cout << setprecision(5) << temperature << " degrees Fahrenheit is " << conv.CalcFahr() << " degrees Celsius" << endl;
                    break;
            default: cout << "Try again..." << endl;
		}
            cout << "Repeat (y/n)? "; cin >> repeat;



	}
	return 0;
}
