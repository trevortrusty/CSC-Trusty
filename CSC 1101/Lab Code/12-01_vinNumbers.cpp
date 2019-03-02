//==========================================================
//
// Title:      Welcome to Text File Input - One Line Per Read
// Course:     CSC 1101
// Lab Number: 11-01
// Author:     Trevor Trusty
// Date:       3/1/2019
// Description:
//    This C++ console application demonstrates reading one
// line at a time from a text file.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

const int Col1 = 17;
const int Col2 = 12;
void vinCase(string line, string year)
{
		cout << setw(Col1) << left << line; 
		cout << setw(Col2) << right << year << endl;
}

int main()
{
	ifstream inFile;
	int lineCount = 0;
	string line;

	const string VIN_NUMBERS = "VINs.txt";

  // Show application header
  cout << "Welcome to Welcome to Text File Input - One Line Per Read!" << endl;
  cout << "-----------------------------------------------------------" << endl << endl;

  //Attempt to open file
  inFile.open(VIN_NUMBERS);

  if (!inFile.is_open())
  {
	  cout << "Error: could not open file!" << endl;
  }
  else 
  {
	  cout << "Reading from file '" << VIN_NUMBERS << "'..." << endl << endl;
	  vinCase("VIN", "Year");
	  cout << "------------------------------" << endl;
	  while (inFile.good())
	  {
		  getline(inFile, line);
		  switch (line.at(9))
		  {
			  case 'A': 
				  vinCase(line, "2010");
				break;
			  case 'B': 
				  vinCase(line, "2011");
				  break;
			  case 'C':
				  vinCase(line, "2012");
				  break;
			  case 'D':
				  vinCase(line, "2013");
				  break;
			  case 'E':
				  vinCase(line, "2014");
				  break;
			  case 'F':
				  vinCase(line, "2015");
				  break;
			  case 'G':
				  vinCase(line, "2016");
				  break;
			  case 'H':
				  vinCase(line, "2017");
				  break;
			  case 'J':
				  vinCase(line, "2018");
				  break;
			  case 'K':
				  vinCase(line, "2019");
				  break;
			  case 'L':
				  vinCase(line, "1990");
				  break;
			  case 'M':
				  vinCase(line, "1991");
				  break;
			  case 'N':
				  vinCase(line, "1992");
				  break;
			  case 'P':
				  vinCase(line, "1993");
				  break;
			  case 'R':
				  vinCase(line, "1994");
				  break;
			  case 'S':
				  vinCase(line, "1995");
				  break;
			  case 'T':
				  vinCase(line, "1996");
				  break;
			  case 'V':
				  vinCase(line, "1997");
				  break;
			  case 'W':
				  vinCase(line, "1998");
				  break;
			  case 'X':
				  vinCase(line, "1999");
				  break;
			  case 'Y':
				  vinCase(line, "2000");
				  break;
			  case '1':
				  vinCase(line, "2001");
				  break;
			  case '2':
				  vinCase(line, "2002");
				  break;
			  case '3':
				  vinCase(line, "2003");
				  break;
			  case '4':
				  vinCase(line, "2004");
				  break;
			  case '5':
				  vinCase(line, "2005");
				  break;
			  case '6':
				  vinCase(line, "2006");
				  break;
			  case '7':
				  vinCase(line, "2007");
				  break;
			  case '8':
				  vinCase(line, "2008");
				  break;
			  case '9':
				  vinCase(line, "2009");
				  break;
		  }
		  lineCount++;
	  }
  }
  inFile.close();
  // Show application close
  cout << "\nEnd of Welcome to Text File Input - One Line Per Read" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
