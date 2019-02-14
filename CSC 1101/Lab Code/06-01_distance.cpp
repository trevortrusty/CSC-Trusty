//==========================================================
//
// Title:      Map Masters
// Course:     CSC 1101
// Lab Number: Lab06-01
// Author:     Trevor Trusty
// Date:       2/1/2019
// Description:
//   Application takes coordinates of two locations as input,
// then calculates the distance between them for the user.
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

//declare variables
string title = "Map Masters";
double x1, y1, x2, y2;
string units1 = " km";

//constants
const int col1 = 10;
const int col2 = 5;

	cout << "Welcome to " << title << endl;
	cout << "--------------------------" << endl << endl;

	//Prompt user for coordinates
	cout << "Enter the coordinates of the starting location." << endl;
	cout << "\nValue for x1: ";                            //x coordinate of first location
	cin >> x1;
	
	cout << "Value for y1: ";                            //y coordinate of first location
	cin >> y1;
	

	cout << "\nEnter the coordinates of the ending location." << endl;
	cout << "\nValue for x2: ";                          //x coordinate of second location
	cin >> x2;

	cout << "Value for y2: ";                            //y coordinate of second location
	cin >> y2;
	cout << endl;    //all information has been collected
	
//Algebra
double num1, num2;
double distance;
num1 = (x2 - x1);
num1 *= num1;
num2 = (y2 - y1);
num2 *= num2;

distance = sqrt(num1 + num2);


//Show table
	cout << "====================================" << endl;
	cout << fixed << setprecision(1);

	cout << setw(col1) << left << "x1:";
	cout << setw(col2) << right << x1 << units1 << endl;

	cout << setw(col1) << left << "x2:";
	cout << setw(col2) << right << x2 << units1 << endl;
				
	cout << setw(col1) << left << "y1:";
	cout << setw(col2) << right << y1 << units1 << endl;

	cout << setw(col1) << left << "y2:";
	cout << setw(col2) << right << y2 << units1 << endl;

	cout << setw(col1) << left << "Distance:";
	cout << setw(col2) << right << distance << units1 << endl;
	cout << "====================================" << endl;
	cout << "\nEnd of " << title << endl;
	cout << "Press any key to exit...";
	

	_getch();
	}
