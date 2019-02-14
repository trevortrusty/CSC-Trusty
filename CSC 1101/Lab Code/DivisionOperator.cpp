//==========================================================
//
// Title: Division Operator
// Description:
//   This C++ console application shows how the division 
// operator handles integer operands.
//
//==========================================================
#include <conio.h> // For function _getch()
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare variables
  int m = 1;
  int n = 4;

  // Show application header
  cout << "Welcome to Division Operator" << endl;
  cout << "----------------------------" << endl << endl;

  // Show operands
  cout << "m: " << m << endl;
  cout << "n: " << n<< endl;

  // Show division operation without casting 
  cout << "\nWhen both operands are integer:    m / n = " 
    << (m / n) << endl;

  // Show division operation with casting
  cout << "When at least one operand is real: m / n = " 
    << (m / (double) n) << endl;

  // Show application close
  cout << "\nEnd of Division Operator" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
