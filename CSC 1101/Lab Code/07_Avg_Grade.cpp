//==========================================================
//
// Title:      Grade Averages
// Course:     CSC 1101
// Lab Number: Lab 7
// Author:     Trevor Trusty
// Date:       2/5/2019
// Description:
//   Takes the grades of three students and shows the average 
// grades.
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
	//Declare variables and constants
	string firstName1, lastName1, firstName2, lastName2, firstName3, lastName3;
	string name1, name2, name3;
	char p = ' ';
	double examGrade1, examGrade2, examGrade3, avg;
	const int COL1 = 15;
	const int COL2 = 6;

	// Show application header
	cout << "Welcome to my Grade Averages!" << endl;
	cout << "--------------------------" << endl << endl;

	//Prompt user for Student 1's grade
	cout << "Enter a student's first and last name: ";
	cin >> firstName1 >> lastName1;
	cout << endl;

	cout << "Enter student's exam grade (%): ";
	cin >> examGrade1;
	cout << endl;

	//Prompt user for Student 2's grade
	cout << "Enter next student's first and last name: ";
	cin >> firstName2 >> lastName2;
	cout << endl;

	cout << "Enter student's exam grade (%): ";
	cin >> examGrade2;
	cout << endl;

	//Prompt user for Student 3's grade
	cout << "Enter last student's first and last name: ";
	cin >> firstName3 >> lastName3;
	cout << endl;

	cout << "Enter student's exam grade (%): ";
	cin >> examGrade3;
	cout << endl;

	name1 = firstName1 + p + lastName1;
	name2 = firstName2 + p + lastName2;
	name3 = firstName3 + p + lastName3;
	avg = examGrade1 + examGrade2 + examGrade3;
	avg /= 3;

	//Show average grade table
	cout << fixed << setprecision(2);

	cout << setw(COL1) << left << "Names";
	cout << setw(COL2) << left << "Grades" << endl;

	cout << "----------------------------" << endl;

	cout << setw(COL1) << left << name1;
	cout << setw(COL2) << right << examGrade1 << endl;

	cout << setw(COL1) << left << name2;
	cout << setw(COL2) << right << examGrade2 << endl;

	cout << setw(COL1) << left << name3;
	cout << setw(COL2) << right << examGrade3 << endl;

	cout << setw(COL1) << left << "Average";
	cout << setw(COL2) << right << avg << endl;
	
	// Show application close
	cout << "\nEnd of my Grade Averages" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;

	_getch();
} 
