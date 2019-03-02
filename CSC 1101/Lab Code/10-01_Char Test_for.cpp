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

int main() 
{
	string iString;
	int digit = 0;
	int alpha = 0;
	int punct = 0;
	int other = 0;
	int index;

	const int Col1 = 20;
	const int Col2 = 15;
	const string TITLE = "Letter Lovers, v2";

	cout << "Welcome to " << TITLE << endl;
	cout << "--------------------------" << endl << endl;

	//Promt user for string
	cout << "Type a string of at least 10 characters (type \"STOP_RUNNING\" to exit): ";
	getline(cin, iString);
	cout << endl;

	//Test string for proper length
	while (iString.length() < 10)
	{
		//Error message
		cout << '\"' << iString << "\" " " is not valid. String must be at least 10 characters long." << endl;
		//Reprompt for string
		cout << "Type a string of at least 10 characters (type \"STOP_RUNNING\" to exit):  ";
		getline(cin, iString);
		cout << endl;
	}

	//Count Digits in string
	int length = iString.length();

	for (int index = 0; index < length; index++)
	{
		if (isdigit(iString.at(index)))
		{
			digit++;
		}
	}
	//Count letters in string
	for (int index = 0; index < length; index++)
	{
		if (isalpha(iString.at(index)))
		{
			alpha++;
		}
	}
	//Count punctuations in string
	for (int index = 0; index < length; index++)
	{
		if (ispunct(iString.at(index)))
		{
			punct++;
		}
	}
	//Count other/whitespace in string
	for (int index = 0; index < length; index++)
	{
		if (!isdigit(iString.at(index)) && !isalpha(iString.at(index)) && !ispunct(iString.at(index)))
		{
			other++;
		}
	}

	cout << "====================================" << endl;

	cout << setw(Col1) << left << "String:";
	cout << setw(Col2) << right << iString << endl;

	cout << setw(Col1) << left << "Length:";
	cout << setw(Col2) << right << iString.length() << endl;

	cout << setw(Col1) << left << "Digits:";
	cout << setw(Col2) << right << digit << endl;

	cout << setw(Col1) << left << "Alpha:";
	cout << setw(Col2) << right << alpha << endl;

	cout << setw(Col1) << left << "Punct:";
	cout << setw(Col2) << right << punct << endl;

	cout << setw(Col1) << left << "Other:";
	cout << setw(Col2) << right << other << endl;
	cout << "====================================" << endl;
	cout << "\nEnd of " << TITLE << endl;
	cout << "Press any key to exit...";
	_getch();
}
		