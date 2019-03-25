//==========================================================
//
// Title:      PI Throwers
// Course:     CSC 1101
// Lab Number: Lab 14
// Author:     Trevor Trusty
// Date:       3/8/2019
// Description:
//   Takes number of terms from the user to approximate PI with
//  using Leibniz formula.
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

bool iseven(int v) // Call iseven() to test if integer is even
{
	if (v % 2 == 0) 
	{
		return true; // Integer is even
	}
	else
		return false; // Integer is odd
}

int main()
{

	// Declare variables
	double d; // Number of digits to approximate
	double x = 1; // Denominator's value
	double run = 0; // The result of each loop

	// Show application header
	cout << "Welcome to PI Throwers!" << endl;
	cout << "--------------------------" << endl << endl;

	// Read from console
	cout << "Enter the amount of digits to approximate pi to, that is at least 1: ";
	cin >> d;

	while (d < 1) //Validating user input
	{
		cout << "Catastrophic Failure: response must be at least 1, you entered " << d << '.';
		cout << "\n\nEnter the amount of digits to approximate pi to, that is at least 1: ";
		cin >> d;
	}
	for (int i = 1; i <= d; i++)
	{

		if (iseven(i)) // loop counter is even
		{
			run -= 1 / x;
			x += 2;
		}
		else //loop counter is odd
		{
			run += 1 / x;
			x += 2;
		}
	}

	run *= 4;

	// Write to screen
	cout << setprecision(10);
	cout << "Approximation:\t" << run << endl;

	// Show application close
	cout << "\nEnd of PI Throwers" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
	return 0;
}
