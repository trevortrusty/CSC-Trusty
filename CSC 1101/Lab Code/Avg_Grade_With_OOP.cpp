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

//Global constants
const int COL1 = 15; // for column widths
const int COL2 = 6;

class Student
{
private:
	string name;
public:
	void setName(string x)
	{
		name = x;
	}
	string getName()
	{
		return name;
	}
	double grade;
};

int main()
{
	//Declare variables and objects
	Student student1, student2, student3;
	string x; // Name input from user
	double y; // Grade percent input from user
	double avg;

	// Show application header
	cout << "Welcome to my Grade Averages!" << endl;
	cout << "--------------------------" << endl << endl;


	//Prompt user for Student 1's name and grade
	cout << "Enter a student's full name: ";
	getline(cin, x);
	student1.setName(x);
	cout << endl;

	cout << "Enter student's exam grade (%): ";
	cin >> y;
	student1.grade = y;
	cout << endl;

	//Prompt user for Student 2's name and grade
	cout << "Enter a student's full name: ";
	cin.ignore(INT_MAX, '\n');
	getline(cin, x);
	student2.setName(x);
	cout << endl;

	cout << "Enter student's exam grade (%): ";
	cin >> y;
	student2.grade = y;
	cout << endl;

	//Prompt user for Student 3's name and grade
	cout << "Enter a student's full name: ";
	cin.ignore(INT_MAX, '\n');
	getline(cin, x);
	student3.setName(x);
	cout << endl;

	cout << "Enter student's exam grade (%): ";
	cin >> y;
	student3.grade = y;
	cout << endl;

	
	avg = student1.grade + student2.grade + student3.grade;
	avg /= 3;

	//Show average grade table
	cout << fixed << setprecision(2);

	cout << setw(COL1) << left << "Names";
	cout << setw(COL2) << left << "Grades" << endl;

	cout << "----------------------------" << endl;

	cout << setw(COL1) << left << student1.getName();
	cout << setw(COL2) << right << student1.grade << endl;

	cout << setw(COL1) << left << student2.getName();
	cout << setw(COL2) << right << student2.grade << endl;

	cout << setw(COL1) << left << student3.getName();
	cout << setw(COL2) << right << student3.grade << endl;

	cout << setw(COL1) << left << "Average";
	cout << setw(COL2) << right << avg << endl;
	
	// Show application close
	cout << "\nEnd of my Grade Averages" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;

	_getch();
	return 0;
} 
