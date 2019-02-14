//==========================================================
//
// Title:      Square and Cube of 7
// Course:     CSC 1101
// Lab Number: 2-2
// Author:     Trevor Trusty
// Date:       1/17/2019
// Description:
//   This console application takes the number 7, 
// and calculates the value to the second and third powers and 
// displays them for the user.
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
	 int num = 7;
  
  // Show application header
  cout << "Welcome to Square and Cube of " << num << endl;
  cout << "--------------------------" << endl << endl;

  // Calculate and show square and cube
  cout << "For number " << num 
    << ", the square is " << num * num 
    << ", and the cube is " << num * num * num
    << "." << endl;

  // Show application close
  cout << "\nEnd of Square and Cube of " << num << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
