//==========================================================
//
// Title:      Paint Helper
// Course:     CSC 1101
// Lab Number: Lab05
// Author:     Trevor Trusty
// Date:       1/29/2019
// Description:
//   Helps users to calculate the cost of paint for walls with
// the area they specify, showing the cost of using red, green,
// or blue.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std;

int main()

{

		//Declare Variables
		int area;
		double cost;

		int col1 = 20;
		int col2 = 10;

		//Declare Constants
		const int RED = 5;
		const int GREEN = 3;
		const int BLUE = 1;

	//Program Header
	cout << "Welcome to Paint Helper!" << endl;
	cout << "--------------------------" << endl << endl;

	cout << "Paint Helper will help you calculate the cost to paint your wall." << endl;
	
	//Promt user for wall area
	cout << "Enter area of the wall you wish to paint: ";
	cin >> area;
	cout << endl << endl;

					//CALCULATIONS
					double redCost = RED * area;
					double greenCost = GREEN * area;
					double blueCost = BLUE * area;

	//Show user their color prices 
	cout << fixed << setprecision(2);
	cout << "================================" << endl;

	cout << setw(col1) << left << "Area (sq ft): ";
	cout << setw(col2) << right << area << endl;

	cout << setw(col1) << left << "Cost in red ($) : ";
	cout << setw(col2) << right << redCost << endl;

	cout << setw(col1) << left << "Cost in green ($) : ";
	cout << setw(col2) << right << greenCost << endl;

	cout << setw(col1) << left << "Cost in blue ($) : ";
	cout << setw(col2) << right << blueCost << endl;

	cout << "================================" << endl;
	

	cout << "\nEnd of Paint Helper" << endl;
	cout << "Press any key to exit ...";
	_getch();
}