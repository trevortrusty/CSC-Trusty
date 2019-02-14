//==========================================================
//
// Title:      <application>
// Course:     CSC 1101
// Lab Number: <number>
// Author:     <name>
// Date:       <date>
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
	string useData;

	cout << "Hello World" << endl << endl;
	cin >> useData;

	if (useData == "Ohio")
	{
		cout << "Ohio Sucks dude. Move quickly" << endl;
	}
	if (useData == "Michigan")
	{
		cout << "Michigan has the dumbest weather, but still a better state than Ohio overall, so I'll give you that";
	}
	else
	{
		cout << "\nWell I don't know what that even is......" << endl;
		cout << "Press f for respects";
	}
	_getch();
}