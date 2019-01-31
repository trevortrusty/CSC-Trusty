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
	//variables
	double answer;
	string name;

	cout << "Welcome to Jon Bot 2.2" << endl;
	cout << "-----------------------" << endl << endl;

	cout << "Please enter your first name.";
	getline(cin, name);
	

	cout << "What is the square root of 169?" << endl;
	cin >> answer;
	cout << answer << " \a? No that's wrong... " << name << " , YOU DUMBASS BITCH!!";

  // Show application close
  cout << "\nEnd of my Application" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
