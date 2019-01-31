//==========================================================
//
// Title:      Sphere Calculator
// Course:     CSC 1101
// Lab Number: Lab04-02
// Author:     Trevor Trusty
// Date:       1/28/2019
// Description:
//   User enters a radius for a sphere, and console calculates and 
// displays the volume, circumfrence, and surface area of the sphere 
// with user's radius.
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

//Declare constant
const double pi = 3.14159;
const double f = 4. / 3;

//Variables
int col1 = 16; //Column width
int col2 = 10;  //Column width
//int col3 = 0;  //Column width
double r;

//Program Header
cout << "Welcome to Sphere Calculator!" << endl;
cout << "--------------------------" << endl << endl;

//Get radius value from user
cout << "Enter the radius in cm: ";
cin >> r;
cout << endl;

		//Calculations of Radius
		double v = (f)* pi * r *  r * r;
		double c = 2 * pi * r;
		double a = 4 * pi * r * r;

cout << fixed << setprecision (3);

//Output table of values
cout << setw(col1) << left << "Radius:";
cout << setw(col2) << right << r;
cout << left << " cm" << endl;

cout << setw(col1) << left << "Volume:";
cout << setw(col2) << right << v;
cout << left << " cm^3" << endl;

cout << setw(col1) << left << "Circumference:";
cout << setw(col2) << right << c;
cout << left << " cm" << endl;

cout << setw(col1) << left << "Surface Area:";
cout << setw(col2) << right << a;
cout << left << " cm^2" << endl;

// Pause before application window closes
cout << "\n\aEnd of Sphere Calculator" << endl;
cout << "Press any key to exit ..." << endl;
_getch();
}
