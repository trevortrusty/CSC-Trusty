//==========================================================
//
// Title:      Area Calculation
// Course:     CSC 1101
// Lab Number: Lab03
// Author:     Trevor Trusty
// Date:       1/22/2019
// Description:
//   Console program that takes a width and height given in 
// the source code, and outputs width, height, and area to the user.
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
	int width = 5;
	int height = 8;
	int totalArea = width * height;
	string appName = "Area Calculation";
  // Show application header
  cout << "Welcome to my " << appName << " program!" << endl;
  cout << "--------------------------" << endl << endl;

  // Read dimensions from console
  cout << "The Width is " << width << " feet." << endl;
  cout << "The Height is " << height << " feet." << endl << endl;
  cout << "The total area of the four walls is " << totalArea << " square feet." << endl;

  // Show application close
  cout << "\nEnd of " << appName << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
