//==========================================================
//
// Title:      Letter Lovers v2
// Course:     CSC 1101
// Lab Number: Lab10-01
// Author:     Trevor Trusty
// Date:       2/18/2019
// Description:
//		Analyzes the types of characters in a string entered by the user,
// and displays the count of numbers, letters, punctuation marks and spaces in the string.
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
	cout << "Type a string of at least 10 characters: ";
	getline(cin, iString);
	cout << endl;

	//Test string for proper length
	while (iString.length() < 10)
	{
		//Error message
		cout << '\"' << iString << "\" " " is not valid. String must be at least 10 characters long." << endl;
		//Reprompt for string
		cout << "Type a string of at least 10 characters:  ";
		getline(cin, iString);
		cout << endl;
	}

	//Count Digits in string
	int length = iString.length();

	index = 0;
	while (index < length)
	{
		if (isdigit(iString.at(index)))
		{
			digit++;
		}
		index++;
	}

	//for (int index = 0; index < length; index++)
	//{
	//	if (isdigit(iString.at(index)))
	//	{
	//		digit++;
	//	}
	//} 

	//Count letters in string
	index = 0;
	while (index < length)
	{
		if (isalpha(iString.at(index)))
		{
			alpha++;
		}
		index++;
	}

	//for (int index = 0; index < length; index++)
	//{
	//	if (isalpha(iString.at(index)))
	//	{
	//		alpha++;
	//	}
	//}

	//Count punctuations in string
	index = 0;
	while (index < length)
	{
		if (ispunct(iString.at(index)))
		{
			punct++;
		}
		index++;
	}

	//for (int index = 0; index < length; index++)
	//{
	//	if (ispunct(iString.at(index)))
	//	{
	//		punct++;
	//	}
	//}

	//Count other/whitespace in string
	index = 0;
	while (index < length)
	{
		if (!isdigit(iString.at(index)) && !isalpha(iString.at(index)) && !ispunct(iString.at(index)))
		{
			other++;
		}
		index++;
	}

	//for (int index = 0; index < length; index++)
	//{
	//	if (!isdigit(iString.at(index)) && !isalpha(iString.at(index)) && !ispunct(iString.at(index)))
	//	{
	//		other++;
	//	}
	//}

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

	//cout << setw(Col1) << left << "Third Character:";
	//cout << setw(Col2) << right << iString.at(2) << endl;
	//cout << setw(Col1) << left << "-Digit?";
	//cout << setw(Col2) << right << isdigit(iString.at(2)) << endl;
	//cout << setw(Col1) << left << "-Alpha?";
	//cout << setw(Col2) << right << isalpha(iString.at(2)) << endl;
	//cout << setw(Col1) << left << "-Punct?";
	//cout << setw(Col2) << right << ispunct(iString.at(2)) << endl << endl;

	//cout << setw(Col1) << left << "6th Character:";
	//cout << setw(Col2) << right << iString.at(5) << endl;
	//cout << setw(Col1) << left << "-Digit?";
	//cout << setw(Col2) << right << isdigit(iString.at(5)) << endl;
	//cout << setw(Col1) << left << "-Alpha?";
	//cout << setw(Col2) << right << isalpha(iString.at(5)) << endl;
	//cout << setw(Col1) << left << "-Punct?";
	//cout << setw(Col2) << right << ispunct(iString.at(5)) << endl << endl;

	//cout << setw(Col1) << left << "9th Character:";
	//cout << setw(Col2) << right << iString.at(8) << endl;
	//cout << setw(Col1) << left << "-Digit?";
	//cout << setw(Col2) << right << isdigit(iString.at(8)) << endl;
	//cout << setw(Col1) << left << "-Alpha?";
	//cout << setw(Col2) << right << isalpha(iString.at(8)) << endl;
	//cout << setw(Col1) << left << "-Punct?";
	//cout << setw(Col2) << right << ispunct(iString.at(8)) << endl << endl;
	//cout << "====================================" << endl;
	cout << "\nEnd of " << TITLE << endl;
	cout << "Press any key to exit...";
	_getch();
}
		