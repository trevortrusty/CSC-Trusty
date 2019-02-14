//==========================================================
//
// Title:      Map Masters
// Course:     CSC 1101
// Lab Number: Lab06-01
// Author:     Trevor Trusty
// Date:       2/1/2019
// Description:
//   Application takes coordinates of two locations as input,
// then calculates the distance between them for the user.
//
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
string title = "Mini Minions";
double value1, value2, value3, maxValue, minValue;
string units1 = " km";

//constants
const int col1 = 15;
const int col2 = 10;
const int prec = 3;
	cout << "Welcome to " << title << endl;
	cout << "--------------------------" << endl << endl;

	//Promt user for some shit
	cout << "List 3 numbers, hitting enter after each one" << endl;
	cout << "Enter Value: ";
	cin >> value1;
	cout << "Enter Value: ";
	cin >> value2;
	cout << "Enter Value: ";
	cin >> value3;
	
	//Find Max and Min
	maxValue = fmax(value1, value2);
	maxValue = fmax(maxValue, value3);
	minValue = fmin(value1, value2);
	minValue = fmin(minValue, value3);

	//Show table
	cout << "====================================" << endl;
	cout << fixed << setprecision(prec);

	cout << setw(col1) << left << "Value 1:";
	cout << setw(col2) << right << value1 << endl;

	cout << setw(col1) << left << "Value 2:";
	cout << setw(col2) << right << value2 << endl;
				
	cout << setw(col1) << left << "Value 3:";
	cout << setw(col2) << right << value3 << endl;

	cout << setw(col1) << left << "Highest value:";
	cout << setw(col2) << right << maxValue << endl;

	cout << setw(col1) << left << "Lowest value:";
	cout << setw(col2) << right << minValue << endl;
	cout << "====================================" << endl;

	cout << "\nEnd of " << title << endl;
	cout << "Press any key to exit...";

	_getch();
	}
