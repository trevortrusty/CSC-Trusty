#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

	double smart = 3.8147;
	double fred = 2.5833;

	cout << fixed << setprecision(2);

	cout << setw(14) << left << "Student";
	cout << setw(12) << right << "GPA" << endl;

	cout << setfill('.');

	cout << setw(14) << left << "Suzie Smart";
	cout << setw(12) << right << smart << endl;

	cout << fixed << setprecision(3);

	cout << setw(14) << left << "Fred Fizzle";
	cout << setw(12) << right << fred << endl;

	_getch();
}