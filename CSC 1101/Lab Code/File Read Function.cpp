//==========================================================
//
// Title:      File Read Function
// Course:     CSC 1101
// Author:     Trevor Trusty
// Description:
//		Uses programmer defined function that opens a text file
// specified in the function call inside of main.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

void file_READ(string FILE_NAME)
{
	ifstream inFile;
	string line;

	inFile.open(FILE_NAME);

	if (!inFile.is_open())
	{
		cout << "Error. Could not open file.\n";
	}
	else
	{
		cout << "Reading in file " << FILE_NAME << " ...\n\n";

		for (int i = 0; inFile.good(); i++)
		{
			getline(inFile, line);
			cout << line << endl;
		}
		inFile.close();
	}
}

int main()
{
	file_READ("text.txt");

	cout << "\nEnd of text file. Press any key to exit.";
	_getch();
}