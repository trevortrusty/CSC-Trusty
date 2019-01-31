//==========================================================
//
// Title:      <application>
// Course:     CSC 1101
// Lab Number: <number>
// Author:     Trevor Trusty
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

// Declare variables
	string s;
	ifstream myFile ("Chung1");
	string line;
// Show application header
	//cout << "Welcome to my Application!" << endl;
	//cout << "--------------------------" << endl << endl;

// Read from console
	cout << "State your name: ";
	cin >> s;
// Print the Chungi
	myFile.open("Chung1.txt");

	if (myFile.is_open()) 
	{
		while (getline(myFile, line))
		{
			cout << line << '\n';
		}
		myFile.close();
	}
	else cout << "Unable to open file chung1.txt" << endl; 
	myFile.close();
		

//Output user's new name
	cout << "Your name is: Big Chungus" << endl;

  // Write to screen
  //cout << "Hello World!" << endl;

// Show application close
	cout << "\nEnd of Chunga v1.0" << endl << endl;

// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();

}
