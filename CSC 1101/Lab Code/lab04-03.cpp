//==========================================================
//
// Title:      Gas Gems
// Course:     CSC 1101
// Lab Number: Lab04-03
// Author:     Trevor Trusty
// Date:       1/28/2019
// Description:
//   <brief description of application including its inputs,
// processing, and outputs>
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

  // Declare variables
	string from;
	string to;
	double dist;
	float price;
	
  //setw
	int col1 = 30;
	int col2 = 20;

  // Declare Constants
	const float MIL = 25;
	const int STOP = 100;
	const float SNACC = 7.50;
  // Show application header
  cout << "Welcome to Gas Gems!" << endl;
  cout << "--------------------------" << endl << endl;

  cout << "Please enter starting point (hyphenated, no spaces): ";
  cin >> from;

  cout << "Enter destination: ";
  cin >> to;

  cout << "Enter the distance (miles) between the cities: ";
  cin >> dist;

  cout << "Enter the gasoline price ($) per gallon: ";
  cin >> price;
  cout << endl;

  // Trip Calculation
	const double GAL = dist / MIL;
	double gasCost = GAL * price;
	float x = dist / STOP; //number of stops before rounding
	int stops = (int)x; //Number of stops
	double snackCost = stops * SNACC;
	double totalCost = gasCost + snackCost;
	
	cout << fixed << setprecision(2);
	cout << setw(col1) << left << "Travelling from: ";
	cout << setw(col2) << right << from << endl;

	cout << setw(col1) << left << "Destination: ";
	cout << setw(col2) << right << to << endl;

	cout << setw(col1) << left << "Distance travelled (miles): ";
	cout << setw(col2) << right << dist << endl;

	cout << setw(col1) << left << "Price of gas per gallon ($): ";
	cout << setw(col2) << right << price << endl << endl;

	cout << setw(col1) << left << "Miles per gallon: ";
	cout << setw(col2) << right << MIL << endl;

	cout << setw(col1) << left << "Snack stop miles: ";
	cout << setw(col2) << right << STOP << endl;

	cout << setw(col1) << left << "Snack price per stop ($): ";
	cout << setw(col2) << right << SNACC << endl << endl;

	//cout << setw(col1) << left << "Number of Stops: ";
	//cout << setw(col2) << right << stops << endl << endl;

	cout << setw(col1) << left << "Gas cost ($): ";
	cout << setw(col2) << right << gasCost << endl;

	cout << setw(col1) << left << "Snack cost ($): ";
	cout << setw(col2) << right << snackCost << endl;

	cout << setw(col1) << left << "Total cost ($): ";
	cout << setw(col2) << right << totalCost << endl << endl;

  // Show application close
  cout << "\nEnd of Gas Gems" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
