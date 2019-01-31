//==========================================================
//
// Title:      World Records
// Course:     CSC 1101
// Lab Number: Lab04-01
// Author:     Trevor Trusty
// Date:       1/28/2019
// Description:
//   Displays world records in Olympic speedskating for 4 skaters
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
  

  // Show application header
  cout << "Welcome to World Records!" << endl;
  cout << "--------------------------" << endl << endl;

  //Column headings
  cout << "Skater (m-men; w-women)\t";
  cout << "\tCountry\t";
  cout << "\tEvent (meters)\t";
  cout << "Time (minutes:seconds)";
  cout << "\tAverage Speed" << endl;
  cout << "------------------------------------------------";
  cout << "-----------------------------------------------------" << endl;

  //Row 1
  cout << "Pavel Kulizhnikov (m)\t";
  cout << "\tRussia\t";
  cout << "\t500\t\t";
  cout << "0:33.98";
  cout << "\t\t\t52.972km/h" << endl;

  //Row 2
  cout << "Shani Davis (m)\t";
  cout << "\t\tUSA\t";
  cout << "\t1,000\t\t";
  cout << "1:06.42";
  cout << "\t\t\t54.200km/h" << endl;

  //Row 3
  cout << "Lee Sang-hwa (w)\t";
  cout << "\tSouth Korea";
  cout << "\t500\t\t";
  cout << "0:36.36";
  cout << "\t\t\t49.504km/h" << endl;

  //Row 4
  cout << "Nao Kodaira (w)\t";
  cout << "\t\tJapan\t";
  cout << "\t1,000\t\t";
  cout << "1:12.09";
  cout << "\t\t\t49.937km/h" << endl;

  // Show application close
  cout << "\nEnd of World Records" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
