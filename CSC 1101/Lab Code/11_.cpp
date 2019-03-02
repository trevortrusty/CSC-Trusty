//==========================================================
//
// Title:      Equalizer
// Course:     CSC 1101
// Lab Number: Lab 11
// Author:     Trevor Trusty
// Date:       2/26/2019
// Description:
//   Makes numbers that aren't equal closer to equal or something.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	int num1, num2;
	
	// Show application header
	cout << "Welcome to Equalizer!" << endl;
	cout << "--------------------------" << endl << endl;

	//Prompt for first number
	cout << "Enter a positive integer: " << endl;
	cin >> num1;

	//Validation loop
	while (num1 > 50 || num1 < -50)
	{
		cout << "Error num1" << endl;
		cout << "Enter a positive integer: " << endl;
		cin >> num1;
	}

	//Prompt for second number
	cout << "Enter a positive integer: " << endl;
	cin >> num2;

	//Validation loop
	while (num2 > 50 || num2 < -50)
	{
		cout << "Error num2" << endl;
		cout << "Enter a positive integer: " << endl;
		cin >> num2;
	}


	//Test if number 1 is bigger
	if (num1 > num2)
	{
		cout << "First number greater than second number.\n";
		while (num1 > num2)
		{
			int x = 1;
			num2 += 5;
			cout << num2 << ' ';
		}
	}

	else if (num2 > num1)
	{
		cout << "Second number greater than first number.\n";
		for (int i = num1; i < num2; i+=2)
		{
			cout << i << ' ';
			num1 = i;
		}
	}
	else
	{
		cout << "Both numbers are equal." << endl;
		cout << "Num1 = " << num1 << endl;
		cout << "Num2 = " << num2;
	}

	// Show application close
	cout << "\n\nEnd of my Equalizer" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}