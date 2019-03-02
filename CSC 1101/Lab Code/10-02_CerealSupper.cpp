//==========================================================
//
// Title:      Cereal Suppers
// Course:     CSC 1101
// Lab Number: Lab 10-2
// Author:     Trevor Trusty
// Date:       <date>
// Description:
//   calculates and displays the cost of a customer’s cereal purchase
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
	double iNum1;
	double iNum2;
	double w = 4;
	double c = 3.50;
	double r = 3;
	double discount;
	char option;
	double total;
	const int COL1 = 20;
	const int COL2 = 15;

		// Show application header
		cout << "Welcome to Cereal Suppers!" << endl;
		cout << "--------------------------" << endl << endl;

		//Prompt user for quantity of cereal
		cout << "Enter quantity of cereal boxes: ";
		cin >> iNum1;
		cout << endl;

		//Validation loop--testing cereal quantity
		while (iNum1 < 1 || iNum1 > 9)
		{
			cout << iNum1 << " is invalid. Please enter quantity between 1 and 9.";
			cout << "Enter quantity of cereal boxes: ";
			cin >> iNum1;
			cout << endl;
		}

		//Prompt user for discount percent
		cout << "Enter your coupon discount % (0-20): ";
		cin >> iNum2;
		cout << endl;

		//Validation loop--testing discount percentage
		while (iNum2 < 0 || iNum2 > 20)
		{
			cout << iNum2 << "% is invalid. Please enter discount between 0% and 20%.";
			cout << "Enter your coupon discount % (0-20): ";
			cin >> iNum2;
			cout << endl;
		}

		do
		{ 
			//Menu/sentinel loop: loop until user exits menu
			cout << "\nCereal Code Menu" << endl;
			cout << "w - Wheaties" << endl;
			cout << "c - Cheerios" << endl;
			cout << "r - Rice Krispies" << endl;
			cout << "e - Exit" << endl << endl;


			cout << "\nEnter a cereal code: ";
			cin >> option;

		
			switch (option)
			{
			case 'w':
				//Calculate Cost
				discount = iNum2 / 100;
				discount = 1 - discount;
				total = iNum1 * w;
				total = total * discount;

				cout << setw(COL1) << left << "Boxes:";
				cout << setw(COL2) << right << iNum1 << endl;

				cout << setw(COL1) << left << "Discount (%):";
				cout << setw(COL2) << right << iNum2 << endl;

				cout << setw(COL1) << left << "Cereal code:";
				cout << setw(COL2) << right << 'w' << endl;

				cout << setw(COL1) << left << "Cereal type:";
				cout << setw(COL2) << right << "Wheaties" << endl;

				cout << setw(COL1) << left << "Purchase amount:";
				cout << setw(COL2) << right << total << endl;
				break;
			case 'c':
				//Calculate Cost
				discount = iNum2 / 100;
				discount = 1 - discount;
				total = iNum1 * c;
				total = total * discount;

				cout << setw(COL1) << left << "Boxes:";
				cout << setw(COL2) << right << iNum1 << endl;

				cout << setw(COL1) << left << "Discount (%):";
				cout << setw(COL2) << right << iNum2 << endl;

				cout << setw(COL1) << left << "Cereal code:";
				cout << setw(COL2) << right << 'c' << endl;

				cout << setw(COL1) << left << "Cereal type:";
				cout << setw(COL2) << right << "Cheerios" << endl;

				cout << setw(COL1) << left << "Purchase amount:";
				cout << setw(COL2) << right << total << endl;
				break;
			case 'r':
				//Calculate Cost
				discount = iNum2 / 100;
				discount = 1 - discount;
				total = iNum1 * r;
				total = total * discount;

				cout << setw(COL1) << left << "Boxes:";
				cout << setw(COL2) << right << iNum1 << endl;

				cout << setw(COL1) << left << "Discount (%):";
				cout << setw(COL2) << right << iNum2 << endl;

				cout << setw(COL1) << left << "Cereal code:";
				cout << setw(COL2) << right << 'r' << endl;

				cout << setw(COL1) << left << "Cereal type:";
				cout << setw(COL2) << right << "Rice Krispies" << endl;

				cout << setw(COL1) << left << "Purchase amount:";
				cout << setw(COL2) << right << total << endl;
				break;
			case 'e':
				break;
			default :
				cout << '\'' << option << '\'' << " is not a valid cereal code.";

			} 
		} while (option != 'w' && option != 'c' && option != 'r' && option != 'e');

	// Show application close
	cout << "\nEnd of Cereal Suppers" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();
}