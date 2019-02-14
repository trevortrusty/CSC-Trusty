//==========================================================
//
// Title:      Heat Hunters
// Course:     CSC 1101
// Lab Number: Lab08-01
// Author:     Trevor Trusty
// Date:       2/7/2019
// Description:
//   User enters temperature in fahrenheit from -60 to 120 and the program 
// converts it to degrees celcius.
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"
int main() {


	//declare variables
	double fValue; //fahrenheit input
	double result; //celcius output
	//constants
	const string TITLE = "Heat Hunters";
	const int COL1 = 15;
	const int COL2 = 10;
	const char SYMBOL = 167; //Used to output degree symbol

	cout << "Welcome to " << TITLE << endl;
	cout << "--------------------------" << endl << endl;

	//Promt user for temperature
	cout << "Enter temperature in degrees fahrenheit, " << endl;
	cout << "and the Cesius equivelent will be calculated for you." << endl;
	cout << "\nTemperature(" << SYMBOL << "F): ";
	cin >> fValue;
	cout << endl;

	if (fValue < -60 || fValue > 120) //fValue will only be used if btwn -60 and 120
	{
		cout << "Indvalid temperature entered." << endl;
		cout << "Press any key to exit program...";
		_getch();
	}
	else
	{
		//Convert to Celcius
		result = fValue;
		result -= 32;
		result *= 5;
		result /= 9.;

		//Show table
		cout << "====================================" << endl;
		cout << fixed << setprecision(2);
		cout << setw(COL1) << left << "Fahrenheit:";
		cout << setw(COL2) << right << fValue << " " << SYMBOL << "F" << endl;

		cout << setw(COL1) << left << "Celcius:";
		cout << setw(COL2) << right << result << " " << SYMBOL << "C" << endl;

		cout << "====================================" << endl;

		cout << "\nEnd of " << TITLE << endl;
		cout << "Press any key to exit...";

		_getch();
	}
}