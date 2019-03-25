//==========================================================
//
// Title:      PI Approximator
// Course:     CSC 1101
// Lab Number: Lab 15
// Author:     Trevor Trusty
// Date:       3/19/2019
// Description:
//   Takes number of terms from the user to approximate PI with
// using Leibniz formula.
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//Function Prototypes
bool iseven(int); // Call iseven() to test if integer is even

double piApproximation(int);

int main()
{

	// Declare variables
	int d; // Number of digits to approximate
	double x = 1; // Denominator's value
	double run = 0; // The result of each loop

	// Show application header
	cout << "Welcome to PI Throwers!" << endl;
	cout << "--------------------------" << endl << endl;

	for (int i = 1; i <= 3; i++) //Approximating pi 3 times
	{
		// Read from console
		cout << "Enter the amount of digits to approximate pi to, that is at least 1: ";
		cin >> d;

		while (d < 1) //Validating user input
		{
			cout << "Catastrophic Failure: response must be at least 1, you entered " << d << '.';
			cout << "\n\nEnter the amount of digits to approximate pi to, that is at least 1: ";
			cin >> d;
		}


		// Write to screen
		cout << setprecision(16);
		cout << "Approximation:\t" << piApproximation(d) << endl;
	}
	// Show application close
	cout << "\nEnd of PI Throwers" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
	return 0;
}

//function definitions
bool iseven(int v) // Call iseven() to test if integer is even
{
	if (v % 2 == 0)
	{
		return true; // Integer is even
	}
	else
		return false; // Integer is odd
}

double piApproximation (int x) // User input (int)
{
	double y = 0; //Pi approximation
	double z = 1; // Denominator
	for (int i = 1; i <= x; i++)
{

	if (iseven(i)) // loop counter is even
	{
		y -= 1 / z; // y is the approximation of pi
		z += 2; 
	}
	else //loop counter is odd
	{
		y += 1 / z;
		z += 2;
	}
}

y *= 4;
return y;
}








