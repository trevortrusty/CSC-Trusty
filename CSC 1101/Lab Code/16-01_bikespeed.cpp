//==========================================================
//
// Title:      Wheeled Wrens 
// Course:     CSC 1101
// Lab Number: Lab 16-01
// Author:     Trevor Trusty
// Date:       3/21/2019
// Description:
//   C++ console application that estimates bicycle speed 
// in miles per hour.
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

enum Option{YES, NO};

//==========================================================
// Globals
//==========================================================
const int COL1 = 33;
const int COL2 = 4;
const double PI = 3.1459;
const double MILES_PER_INCH = 1. / (12 * 5280);
const int MINUTES_PER_HOUR = 60;

//==========================================================
// Prototypes
//==========================================================
Option optionConvert(char);
double speedEstimate(double, double, double);

int main()
{

	// Declare variables
	double wheelDiameter;
	double perPedal;
	double perMinute;
	Option myOption; // YES or NO
	char myChar; // User input for sentinel value

	// Show application header
	cout << "Welcome to Wheeled Wrens!" << endl;
	cout << "--------------------------" << endl << endl;

	//Prompt for sentinel value
	cout << "Get a bicycle speed estimate (y or n)? ";
	cin >> myChar;
	myOption = optionConvert(myChar); // Changes input char into type 'option' for sentinel value

	while (myOption != NO) // Sentinel Loop
	{
		cout << "Enter the wheel diameter in inches (10-50): ";
		cin >> wheelDiameter;
		while (wheelDiameter < 10 || wheelDiameter > 50)
		{
			cout << "Error: Diameter should be between 10 and 50 inches" << endl;
			cout << "Enter the wheel diameter in inches (10-50): ";
			cin >> wheelDiameter;
		}

		cout << "Enter the number of wheel rotations per pedal rotation (0.1-10):";
		cin >> perPedal;
		while (perPedal < 0.1 || perPedal > 10)
		{
			cout << "Error: Rotations should be between 0.1 and 10 rotations." << endl;
			cout << "Enter the numsber of wheel rotations per pedal rotation (0.1-10):";
			cin >> perPedal;
		}

		cout << "Enter the number of pedal rotations per minute (1-120): ";
		cin >> perMinute;
		while (perMinute < 1 || perMinute > 120)
		{
			cout << "Error: Rotations should be between 1 and 120 rotations.";
			cout << "Enter the number of pedal rotations per minute (1-120): ";
			cin >> perMinute;
		}


		//Show table
		cout << fixed << setprecision(1);
		cout << setw(COL1) << left << "Wheel diameter (inches):";
		cout << setw(COL2) << right << wheelDiameter << endl;
		cout << setw(COL1) << left << "Wheel-to-pedal ratio:";
		cout << setw(COL2) << right << perPedal << endl;
		cout << setw(COL1) << left << "Pedal rotations (per minute):";
		cout << setw(COL2) << right << perMinute << endl;
		cout << setw(COL1) << left << "Bike speed (miles per hour):";
		cout << setw(COL2) << right << speedEstimate(wheelDiameter, perPedal, perMinute) << endl;

		cout << "Get another bicycle speed estimate (y or n)? ";
		cin >> myChar;
		myOption = optionConvert(myChar); // Convert new response to be checked again by sentinal loop
	}


	// Show application close
	cout << "\nEnd of PI Throwers" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
	return 0;
}
//==========================================================
// End of Execution
//==========================================================

//==========================================================
// optionConvert
//==========================================================
Option optionConvert(char x)
{
	if (x == 'y')
	{
		return YES;
	} 
	else
		return NO; // For simplicity, any response except y will end the application
}

//==========================================================
// speedEstimate
//==========================================================
double speedEstimate(double x, double y, double z)
{
	return x * y * z * PI * MILES_PER_INCH * MINUTES_PER_HOUR;
}







