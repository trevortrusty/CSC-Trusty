//==========================================================
//
// Title:      Squarerer
// Course:     CSC 1101
// Lab Number: Lab 13
// Author:     Trevor Trusty
// Date:       3/5/2019
// Description:
 //  Takes two integers as input and returns both values
 //squared to the user.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//Square Function
int squared(int x)
{
	return x * x;
}

//Global Constants
int C1 = 15;
int C2 = 20;

int main()
{
	int num1, num2;

	// Declare variables
	

	// Show application header
	cout << "Welcome to my Application!" << endl;
	cout << "--------------------------" << endl << endl;

	// Read from console
	cout << "Enter two integers to be squared!\n";
	cout << "Integer 1: ";
	cin >> num1;
	cout << "Integer 2: ";
	cin >> num2;
	cout << endl;

	// Write to screen
	int result1 = squared(num1);
	int result2 = squared(num2);

	cout << setw(C1) << left << "User Input";
	cout << setw(C2) << right << "Squared Function" << endl;

	cout << setw(C1) << left << num1;
	cout << setw(C2) << right << result1 << endl;

	cout << setw(C1) << left << num2;
	cout << setw(C2) << right << result2 << endl;

	// Show application close
	cout << "\nEnd of my Application" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();

}
