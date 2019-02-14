//==========================================================
//
// Title:      Best Bugs
// Course:     CSC 1101
// Lab Number: Lab08-02
// Author:     Trevor Trusty
// Date:       2/7/2019
// Description:
//		Calculates and displays the cost of a customer’s purchase of one item.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main() {

	//Declare variables
	int amount;		//Quantity of purchase
	char type;		//Type for input
	string name;	//Name of item
	double total;	//total of purchase
	const string TITLE = "Best Bugs";
	const int Col1 = 20;
	const int Col2 = 15;
	const double CPrice = 30;
	const double HPrice = 350;
	const double MPrice = 54;
	const double PPrice = 300;
	const double RPrice = 110;

	cout << "Welcome to " << TITLE << endl;
	cout << "--------------------------" << endl << endl;

	cout << "Enter quantity of the item you are purchasing: ";
	cin >> amount;
	cout << endl;

	if (amount < 1 || amount > 10)
	{
		cout << "Error: Unknown Quantity";
		cout << "\nEnd of " << TITLE << endl;
		cout << "Press any key to exit...";
		_getch();
	}
	else
	{
		cout << "Enter product code (single character): ";
		cin >> type;
		cout << endl;

		if (type != 'c' && type != 'h' && type != 'm' && type != 'p' && type != 'r')
		{
			total = CPrice * amount;
			cout << "====================================" << endl;
			cout << fixed << setprecision(2);
			cout << setw(Col1) << left << "Quantity:";
			cout << setw(Col2) << right << amount << endl;

			cout << setw(Col1) << left << "Product code:";
			cout << setw(Col2) << right << 'c' << endl;

			cout << setw(Col1) << left << "Product name:";
			cout << setw(Col2) << right << "Memory Card" << endl;

			cout << setw(Col1) << left << "Product cost ($):";
			cout << setw(Col2) << right << CPrice << endl;

			cout << setw(Col1) << left << "Purchase Cost ($):";
			cout << setw(Col2) << right << total << endl;

			cout << "====================================" << endl;
			cout << "\nEnd of " << TITLE << endl;
			cout << "Press any key to exit...";
			_getch();
		}
		else
		{
			switch (type)
			{
			case 'c':	//Memory Card $30
				total = CPrice * amount;
				cout << "====================================" << endl;
				cout << fixed << setprecision(2);
				cout << setw(Col1) << left << "Quantity:";
				cout << setw(Col2) << right << amount << endl;

				cout << setw(Col1) << left << "Product code:";
				cout << setw(Col2) << right << type << endl;

				cout << setw(Col1) << left << "Product name:";
				cout << setw(Col2) << right << "Memory Card" << endl;

				cout << setw(Col1) << left << "Product cost ($):";
				cout << setw(Col2) << right << CPrice << endl;

				cout << setw(Col1) << left << "Purchase Cost ($):";
				cout << setw(Col2) << right << total << endl;

				cout << "====================================" << endl;
				break;

			case 'h':
				//Headphones $350
				total = HPrice * amount;
				cout << "====================================" << endl;
				cout << fixed << setprecision(2);
				cout << setw(Col1) << left << "Quantity:";
				cout << setw(Col2) << right << amount << endl;

				cout << setw(Col1) << left << "Product code:";
				cout << setw(Col2) << right << type << endl;

				cout << setw(Col1) << left << "Product name:";
				cout << setw(Col2) << right << "Headphones" << endl;

				cout << setw(Col1) << left << "Product cost ($):";
				cout << setw(Col2) << right << HPrice << endl;

				cout << setw(Col1) << left << "Purchase Cost ($):";
				cout << setw(Col2) << right << total << endl;

				cout << "====================================" << endl;
				break;
			case 'm':
				//Microwave $54
				total = MPrice * amount;
				cout << "====================================" << endl;
				cout << fixed << setprecision(2);
				cout << setw(Col1) << left << "Quantity:";
				cout << setw(Col2) << right << amount << endl;

				cout << setw(Col1) << left << "Product code:";
				cout << setw(Col2) << right << type << endl;

				cout << setw(Col1) << left << "Product name:";
				cout << setw(Col2) << right << "Microwave" << endl;

				cout << setw(Col1) << left << "Product cost ($):";
				cout << setw(Col2) << right << MPrice << endl;

				cout << setw(Col1) << left << "Purchase Cost ($):";
				cout << setw(Col2) << right << total << endl;

				cout << "====================================" << endl;

				break;
			case 'p':
				//PlayStation $300
				total = PPrice * amount;
				cout << "====================================" << endl;
				cout << fixed << setprecision(2);
				cout << setw(Col1) << left << "Quantity:";
				cout << setw(Col2) << right << amount << endl;

				cout << setw(Col1) << left << "Product code:";
				cout << setw(Col2) << right << type << endl;

				cout << setw(Col1) << left << "Product name:";
				cout << setw(Col2) << right << "PlayStation" << endl;

				cout << setw(Col1) << left << "Product cost ($):";
				cout << setw(Col2) << right << PPrice << endl;

				cout << setw(Col1) << left << "Purchase Cost ($):";
				cout << setw(Col2) << right << total << endl;

				cout << "====================================" << endl;

				break;
			case 'r':
				//Router $110
				total = RPrice * amount;
				cout << "====================================" << endl;
				cout << fixed << setprecision(2);
				cout << setw(Col1) << left << "Quantity:";
				cout << setw(Col2) << right << amount << endl;

				cout << setw(Col1) << left << "Product code:";
				cout << setw(Col2) << right << type << endl;

				cout << setw(Col1) << left << "Product name:";
				cout << setw(Col2) << right << "Router" << endl;

				cout << setw(Col1) << left << "Product cost ($):";
				cout << setw(Col2) << right << RPrice << endl;

				cout << setw(Col1) << left << "Purchase Cost ($):";
				cout << setw(Col2) << right << total << endl;

				break;
			}
			cout << "\nEnd of " << TITLE << endl;
			cout << "Press any key to exit...";
			_getch();
		}
	}
}