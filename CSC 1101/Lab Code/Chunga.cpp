
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
	ifstream bigFile ("Chung1");
	ifstream shaggyFile("Shaggy");
	string line;
	string meme;
	char open;
	// Show application header
	//cout << "Welcome to my Application!" << endl;
	//cout << "--------------------------" << endl << endl;
	bigFile.open("Chung1.txt");
	shaggyFile.open("shaggy.txt");
	do
	{

		// Read from console
		cout << "Enter meme: ";
		getline(cin, meme);

		//Test user input
		//while (meme != "Big Chungus" && meme != "Shaggy")
		//{
		//	cout << "\nUnknown meme, try again!" << endl;
		//	cout << "\nEnter meme: ";
		//	cin.ignore();
		//	getline(cin, meme);
		//}

		// Print the Chungi
		if (meme == "Big Chungus")
		{
			if (bigFile.is_open())
			{
				while (getline(bigFile, line))
				{
					cout << line << '\n';
				}
				bigFile.close();
			}
			else cout << "Unable to open file chung1.txt" << endl;
			
		}
		else if (meme == "Shaggy")
		{
			if (shaggyFile.is_open())
			{
				while (getline(shaggyFile, line))
				{
					cout << line << '\n';
				}
				shaggyFile.close();
			}
			else cout << "Unable to open file shaggy.txt" << endl;
		
		}
		//Prompt User to Continue or Exit
		cout << "Would you like to continue? : ";
		cin >> open;

	} while (open == 'y');
	////Output user's new name
	//cout << "Your name is: Big Chungus" << endl;
	bigFile.close();
	shaggyFile.close();
	//Show application close
	cout << "\nEnd of Chunga v1.0" << endl << endl;

	//Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();

}
