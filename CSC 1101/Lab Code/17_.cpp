//==========================================================
//
// Title:      Grade Boi
// Course:     CSC 1101
// Lab Number: Lab 17
// Author:     Trevor Trusty
// Date:       3/26/2019
// Description:
//   Takes students name and whole grade letter, and prints
// whole number percent grade
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

// Enumerated types
enum grades{A = 90, B = 80, C = 70, D = 60, F = 50};

// Constants
const char p = ' '; // Blank whitespace character

// Prototypes
void makeLower(char);
grades toGrades(char x);

int main()
{

  // Declare variables
	char grade;
	grades gradeLetter;
	string firstName, lastName;
	string fullName;

  // Show application header
  cout << "Welcome to Grade Boi!" << endl;
  cout << "--------------------------" << endl << endl;

  // Read from console
  cout << "Enter first name: ";
  cin >> firstName;

  cout << "Enter last name: ";
  cin >> lastName;
  fullName = firstName + p + lastName;

  cout << "Enter student's letter grade: ";
  cin >> grade;
  grade = tolower(grade);
  gradeLetter = toGrades(grade); //Convert grade char to enum defined variable

  // Write to screen
  cout << fullName << " has a grade of " << gradeLetter << endl;

  // Show application close
  cout << "\nEnd of Grade Boi" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}

//==========================================================
// toGrades
//==========================================================
grades toGrades(char x)
{
	switch (x)
	{
	case 'a':
		return A;
		break;
	case 'b':
		return B;
		break;
	case 'c':
		return C;
		break;
	case 'd':
		return D;
		break;
	case 'f':
		return F;
		break;
	}
}