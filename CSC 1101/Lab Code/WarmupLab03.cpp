//==========================================================
//
// Title: Warmup Lab 3
// Course: CSC 1101
// Lab Number: Warmup Lab 3
// Author: Trevor Trusty
// Date: 1/9/2019
// Description:
// This C++ program gets a number from the user and
// calculates the factorial of it.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout".

int main()
{

  // Declare variables
  int number;
  double fact; // Declared 'double' to hold larger numbers 
  // than 'int'

  // Show application header
  cout << "Welcome to Factorial Calculator" << endl;
  cout << "-------------------------------" << endl << endl;

  // Loop to get number.
  // -Factorial is not defined for numbers less than 0.
  // -double cannot hold number larger than 170!.
  cout << "Enter a whole number to calculate the factorial "
    << "of (between 0 and 170): ";
  cin >> number;
  while (number < 0 || number > 170)
  {
    cout << "\nEnter a whole number to calculate the "
      << "factorial of (between 0 and 170): ";
    cin >> number;
  }

  // Test which number entered
  if (number == 0 || number == 1)
    fact = 1;

  // Calculate factorial of numbers greater than 1
  else
  {

    // Loop to calculate factorial
    fact = 1;
    for (int i = number; i > 1; i--)
      fact = fact * i;

  }

  // Show factorial
  cout << number << "! = " << fact << endl;

  // Show application close
  cout << "\nEnd of Factorial Calculator" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
