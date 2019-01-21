//==========================================================
//
// Title:      Warmup Lab 2
// Course:     CSC 1101
// Lab Number: Warmup Lab 2
// Author:     Trevor Trusty
// Date:       1/9/2019
// Description:
//   This C++ program is based on the code template for CSC
// 1101. It had errors in it that I fixed (yay me).
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout".

int main()
{

  // Declare variables
  int i;
  double r;
  string s;
  char c;

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

  // Read from console
  cout << "Enter a number: ";
  cin >> i;

  // Write to screen
  cout << "Hello World!" << endl;

  // Show application close
  cout << "\nEnd of my Application" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
