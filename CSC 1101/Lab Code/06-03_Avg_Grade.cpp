//==========================================================
//
// Title:      Heat Hunters
// Course:     CSC 1101
// Lab Number: Lab06-03
// Author:     Trevor Trusty
// Date:       2/1/2019
// Description:
//   User enters temperature in fahrenheit and the program 
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
/*
	2) write down temperature in degrees Fahrenheit.
	3) subtract 32 away from original temperature
	4) multiply resulting number by 5
	5) divide new number by 9
	6) write the desired units, ℃, after the quotient
*/

//declare variables
double userDeg;
double celc;
//constants
const string TITLE = "Heat Hunters";
const int COL1 = 15;
const int COL2 = 10;
const char DEG = 167;

	cout << "Welcome to " << TITLE << endl;
	cout << "--------------------------" << endl << endl;

//Promt user for temperature
	cout << "Enter temperature in degrees fahrenheit, " << endl;
	cout << "and the Cesius equivelent will be calculated for you." << endl;
	cout << "\nTemperature(" << DEG << "F): ";
	cin >> userDeg;
	cout << endl;

//Convert to Celcius
	celc = userDeg;
	celc -= 32;
	celc *= 5;
	celc /= 9.;

	//Show table
	cout << "====================================" << endl;
	cout << fixed << setprecision(2);
	cout << setw(COL1) << left << "Fahrenheit:";
	cout << setw(COL2) << right << userDeg << " " << DEG << "F" << endl;

	cout << setw(COL1) << left << "Celcius:";
	cout << setw(COL2) << right << celc << " " << DEG << "C" << endl;
	
	cout << "====================================" << endl;

	cout << "\nEnd of " << TITLE << endl;
	cout << "Press any key to exit..."; 

	_getch();
	}
