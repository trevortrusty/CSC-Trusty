//==========================================================
//
// Title:      Ajar Appliances 
// Course:     CSC 1101
// Lab Number: Lab 16-02
// Author:     Trevor Trusty
// Date:       3/21/2019
// Description:
//   C++ console application that calculates sales data.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//==========================================================
// Globals
//==========================================================
enum appliance_type{UNKNOWN, washer, dryer, refrigerator, microwave, toaster, stove};
const string SALES_OUT = "AppliancesSold.txt";
const int COLFMT1 = 32;
const int COLFMT2 = 6;
//==========================================================
// Prototypes
//==========================================================
string convertedToApplianceString(appliance_type);
appliance_type convertedToApplianceType(string);

int main()
{

	// Declare variables
	int x;
	ofstream outFile;

	// Show application header
	cout << "Welcome to Wheeled Wrens!" << endl;
	cout << "--------------------------" << endl << endl;

	outFile.open(SALES_OUT);
	if (!outFile.is_open())
	{
		cout << "Error: Could not open " << SALES_OUT << endl;
	}
	else 
	{

		outFile << setw(COLFMT1) << left << "Appliance"
			<< setw(COLFMT2) << right << "Wholesale price"
			<< setw(COLFMT2) << right << "Retail price"
			<< setw(COLFMT2) << right << "Profit"
			<< setw(COLFMT2) << right << "Commissio"
			<< setw(COLFMT2) << right << "Sales tax"
			<< setw(COLFMT2) << right << "Total" << endl;
		for (int i = 0; i < x; i++)
		{
			
		}
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
// convertedToApplianceString
//==========================================================
string convertedToApplianceString(appliance_type x)
{
	if (x == washer)
		return "washer";
	else if (x == dryer)
		return "dryer";
	else if (x == refrigerator)
		return "refrigerator";
	else if (x == microwave)
		return "microwave";
	else if (x == toaster)
		return "toaster";
	else if (x == stove)
		return "stove";
	else if (x == UNKNOWN)
		return "UNKNOWN";
}

//==========================================================
// convertedToApplianceType
//==========================================================
appliance_type convertedToApplianceType(string x)
{
	if (x == "washer")
		return washer;
	else if (x == "dryer")
		return dryer;
	else if (x == "refrigerator")
		return refrigerator;
	else if (x == "microwave")
		return microwave;
	else if (x == "toaster")
		return toaster;
	else if (x == "stove")
		return stove;
	else if (x == "UNKNOWN")
		return UNKNOWN;
}