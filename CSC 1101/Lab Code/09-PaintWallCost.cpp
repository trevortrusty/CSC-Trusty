//==========================================================
//
// Title:      Wall Cost
// Course:     CSC 1101
// Lab Number: Lab09
// Author:     Trevor Trusty
// Date:       2/12/2019
// Description:
//   Prompts user area of wall and a paint color, and displays the cost
// of the project.
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

	//Declare Variables
	int area, price, total;
	string color;
	char open = 'y';
	const string myApp = "Wall Cost";
	// Show application header
	cout << "Welcome to " << myApp << " !" << endl;
	cout << "--------------------------" << endl << endl;

	
	while (open == 'y') //Keeps looping program until user opts out
	{
		//Prompt user for area, and color
		cout << "Enter area of wall: ";
		cin >> area;
		cout << endl;

		cout << "Enter desired color: ";
		cin >> color;
		cout << endl;

		while (color != "red" && color != "blue" && color != "green")
		{
			cout << "Color must be Red, Blue, or Green" << endl;
			cout << "Enter desired color: ";
			cin >> color;
			cout << endl;
		}
			//red = 5;
			//double blue = 1;
			//green = 3;

		//Test for color to determine price
			if (color == "red")
				price = 5;
			else if (color == "blue")
				price = 1;
			else if (color == "green")
				price = 3;

		//Calculate total cost
		total = area * price;
		//cout << "test: you typed " << color << " and it's price is " << price << " dollars." << endl;

		cout << "The cost to paint a " << area << " square foot wall " << color << " is " << total << " dollars." << endl;
		cout << "\nWould you like to find the cost of another wall? (y/n): ";
		cin >> open;
		cout << endl;
	}
	// Show application close
	cout << "\nEnd of " << myApp << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}