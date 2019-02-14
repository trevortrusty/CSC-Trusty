//==========================================================
//
// Title:      Letter Lovers
// Course:     CSC 1101
// Lab Number: Lab08-03
// Author:     Trevor Trusty
// Date:       2/8/2019
// Description:
//		Analyzes the types of characters in a string entered by the user,
// and displays information about the third, sixth, and ninth characters.
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
	string iString;
	const int Col1 = 20;
	const int Col2 = 15;
	const string TITLE = "Letter Lovers";
	cout << "Welcome to " << TITLE << endl;
	cout << "--------------------------" << endl << endl;

	cout << "Type a string of at least 10 characters: ";
	getline(cin, iString);
	cout << endl;

	if (iString.length() < 10)
		cout << "String must be at least 10 characters long" << endl;
	else
	{
		cout << "Output key: zero-false; non-zero-true" << endl << endl;
		cout << "====================================" << endl;
		
		cout << setw(Col1) << left << "String:";
		cout << setw(Col2) << right << iString << endl;
		cout << setw(Col1) << left << "Length:";
		cout << setw(Col2) << right << iString.length() << endl << endl;

		cout << setw(Col1) << left << "Third Character:";
		cout << setw(Col2) << right << iString.at(2) << endl;
		cout << setw(Col1) << left << "-Digit?";
		cout << setw(Col2) << right << isdigit(iString.at(2)) << endl;
		cout << setw(Col1) << left << "-Alpha?";
		cout << setw(Col2) << right << isalpha(iString.at(2)) << endl;
		cout << setw(Col1) << left << "-Punct?";
		cout << setw(Col2) << right << ispunct(iString.at(2)) << endl << endl;

		cout << setw(Col1) << left << "6th Character:";
		cout << setw(Col2) << right << iString.at(5) << endl;
		cout << setw(Col1) << left << "-Digit?";
		cout << setw(Col2) << right << isdigit(iString.at(5)) << endl;
		cout << setw(Col1) << left << "-Alpha?";
		cout << setw(Col2) << right << isalpha(iString.at(5)) << endl;
		cout << setw(Col1) << left << "-Punct?";
		cout << setw(Col2) << right << ispunct(iString.at(5)) << endl << endl;

		cout << setw(Col1) << left << "9th Character:";
		cout << setw(Col2) << right << iString.at(8) << endl;
		cout << setw(Col1) << left << "-Digit?";
		cout << setw(Col2) << right << isdigit(iString.at(8)) << endl;
		cout << setw(Col1) << left << "-Alpha?";
		cout << setw(Col2) << right << isalpha(iString.at(8)) << endl;
		cout << setw(Col1) << left << "-Punct?";
		cout << setw(Col2) << right << ispunct(iString.at(8)) << endl << endl;
		cout << "====================================" << endl;
	}
		cout << "\nEnd of " << TITLE << endl;
		cout << "Press any key to exit...";
	_getch();
	////Declare variables
	//int amount;		//Quantity of purchase
	//char type;		//Type for input
	//string name;	//Name of item
	//double total;	//total of purchase
	
	//const int Col1 = 20;
	//const int Col2 = 15;
	//const double CPrice = 30;
	//const double HPrice = 350;
	//const double MPrice = 54;
	//const double PPrice = 300;
	//const double RPrice = 110;

	//cout << "Welcome to " << TITLE << endl;
	//cout << "--------------------------" << endl << endl;

	//cout << "Enter quantity of the item you are purchasing: ";
	//cin >> amount;
	//cout << endl;

	//if (amount < 1 || amount > 10)
	//{
	//	cout << "Error: Unknown Quantity";
	//	cout << "\nEnd of " << TITLE << endl;
	//	cout << "Press any key to exit...";
	//	_getch();
	//}
	//else
	//{
	//	cout << "Enter product code (single character): ";
	//	cin >> type;
	//	cout << endl;

	//	if (type != 'c' && type != 'h' && type != 'm' && type != 'p' && type != 'r')
	//	{
	//		total = CPrice * amount;
	//		cout << "====================================" << endl;
	//		cout << fixed << setprecision(2);
	//		cout << setw(Col1) << left << "Quantity:";
	//		cout << setw(Col2) << right << amount << endl;

	//		cout << setw(Col1) << left << "Product code:";
	//		cout << setw(Col2) << right << 'c' << endl;

	//		cout << setw(Col1) << left << "Product name:";
	//		cout << setw(Col2) << right << "Memory Card" << endl;

	//		cout << setw(Col1) << left << "Product cost ($):";
	//		cout << setw(Col2) << right << CPrice << endl;

	//		cout << setw(Col1) << left << "Purchase Cost ($):";
	//		cout << setw(Col2) << right << total << endl;

	//		cout << "====================================" << endl;
	//		cout << "\nEnd of " << TITLE << endl;
	//		cout << "Press any key to exit...";
	//		_getch();
	//	}
	//	else
	//	{
	//		switch (type)
	//		{
	//		case 'c':	//Memory Card $30
	//			total = CPrice * amount;
	//			cout << "====================================" << endl;
	//			cout << fixed << setprecision(2);
	//			cout << setw(Col1) << left << "Quantity:";
	//			cout << setw(Col2) << right << amount << endl;

	//			cout << setw(Col1) << left << "Product code:";
	//			cout << setw(Col2) << right << type << endl;

	//			cout << setw(Col1) << left << "Product name:";
	//			cout << setw(Col2) << right << "Memory Card" << endl;

	//			cout << setw(Col1) << left << "Product cost ($):";
	//			cout << setw(Col2) << right << CPrice << endl;

	//			cout << setw(Col1) << left << "Purchase Cost ($):";
	//			cout << setw(Col2) << right << total << endl;

	//			cout << "====================================" << endl;
	//			break;

	//		case 'h':
	//			//Headphones $350
	//			total = HPrice * amount;
	//			cout << "====================================" << endl;
	//			cout << fixed << setprecision(2);
	//			cout << setw(Col1) << left << "Quantity:";
	//			cout << setw(Col2) << right << amount << endl;

	//			cout << setw(Col1) << left << "Product code:";
	//			cout << setw(Col2) << right << type << endl;

	//			cout << setw(Col1) << left << "Product name:";
	//			cout << setw(Col2) << right << "Headphones" << endl;

	//			cout << setw(Col1) << left << "Product cost ($):";
	//			cout << setw(Col2) << right << HPrice << endl;

	//			cout << setw(Col1) << left << "Purchase Cost ($):";
	//			cout << setw(Col2) << right << total << endl;

	//			cout << "====================================" << endl;
	//			break;
	//		case 'm':
	//			//Microwave $54
	//			total = MPrice * amount;
	//			cout << "====================================" << endl;
	//			cout << fixed << setprecision(2);
	//			cout << setw(Col1) << left << "Quantity:";
	//			cout << setw(Col2) << right << amount << endl;

	//			cout << setw(Col1) << left << "Product code:";
	//			cout << setw(Col2) << right << type << endl;

	//			cout << setw(Col1) << left << "Product name:";
	//			cout << setw(Col2) << right << "Microwave" << endl;

	//			cout << setw(Col1) << left << "Product cost ($):";
	//			cout << setw(Col2) << right << MPrice << endl;

	//			cout << setw(Col1) << left << "Purchase Cost ($):";
	//			cout << setw(Col2) << right << total << endl;

	//			cout << "====================================" << endl;

	//			break;
	//		case 'p':
	//			//PlayStation $300
	//			total = PPrice * amount;
	//			cout << "====================================" << endl;
	//			cout << fixed << setprecision(2);
	//			cout << setw(Col1) << left << "Quantity:";
	//			cout << setw(Col2) << right << amount << endl;

	//			cout << setw(Col1) << left << "Product code:";
	//			cout << setw(Col2) << right << type << endl;

	//			cout << setw(Col1) << left << "Product name:";
	//			cout << setw(Col2) << right << "PlayStation" << endl;

	//			cout << setw(Col1) << left << "Product cost ($):";
	//			cout << setw(Col2) << right << PPrice << endl;

	//			cout << setw(Col1) << left << "Purchase Cost ($):";
	//			cout << setw(Col2) << right << total << endl;

	//			cout << "====================================" << endl;

	//			break;
	//		case 'r':
	//			//Router $110
	//			total = RPrice * amount;
	//			cout << "====================================" << endl;
	//			cout << fixed << setprecision(2);
	//			cout << setw(Col1) << left << "Quantity:";
	//			cout << setw(Col2) << right << amount << endl;

	//			cout << setw(Col1) << left << "Product code:";
	//			cout << setw(Col2) << right << type << endl;

	//			cout << setw(Col1) << left << "Product name:";
	//			cout << setw(Col2) << right << "Router" << endl;

	//			cout << setw(Col1) << left << "Product cost ($):";
	//			cout << setw(Col2) << right << RPrice << endl;

	//			cout << setw(Col1) << left << "Purchase Cost ($):";
	//			cout << setw(Col2) << right << total << endl;

	//			break;
	//		}
	//		cout << "\nEnd of " << TITLE << endl;
	//		cout << "Press any key to exit...";
	//		_getch();
	//	}
	//}
}