//==========================================================
//
// Title: School Closing Advisor
// Description:
//   This C++ console application assists school 
// administration in determining whether to open, delay, or
// close school.  It uses the following logic in making the
// decision:
//
//   Decision  Ice level  Snow level
//   Invalid data  <0 or >=6  <0 or >=10
//   Open          0-0.5      0-4
//   Delay         >0.5-<2    >4-<8
//   Close         >=2-<6     >=8-<10
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
  double ice;
  double snow;

  // Show application header
  cout << "Welcome to School Closing Advisor!" << endl;
  cout << "----------------------------------" << endl 
    << endl;

  // Prompt for an ice level
  cout << "Enter an ice level in inches (0-6): ";
  cin >> ice;

  // Prompt for a snow level
  cout << "Enter a snow level in inches (0-10): ";
  cin >> snow;

  // Test ice level
  if (ice < 0 || ice >= 6)
    cout << "Error: ice level must be within 0-6 inches." 
    << endl;
  else if (snow < 0 || snow >= 10)
    cout << "Error: snow level must be within 0-10 inches." 
    << endl;
  else if (ice <= 0.5 && snow <=4)
    cout << "Open school!" << endl;
  else if (ice < 2 && snow < 8)
    cout << "Delay school opening!" << endl;
  else
    cout << "Close school!" << endl;

  // Show application close
  cout << "\nEnd of School Closing Advisor" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
