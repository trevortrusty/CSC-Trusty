//==========================================================
//
// Title:      Tumbling Tigers 
// Course:     CSC 1101
// Lab Number: Lab 18
// Author:     Trevor N Trusty
// Date:       3/30/2019
// Description:
//   Uses void and value functions to track scoring for 
// Detroit Tiger baseball games, based on the scores entered
// by user for each of the 5 innings
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//==========================================================
// Globals
//==========================================================

// Constants
const int ARR_SIZE = 6;
const int COLFMT[2] = { 10, 10 };

// Function prototypes
int teamScore(int runs[], int inning); // Team Array, Inning
int teamHigh(int runs[]);
void printBoxScore(int runsUs[], int runsThem[], int);

int main() // Execute Program
{

	// Declare variables
	int tigers[ARR_SIZE];
	int blueJays[ARR_SIZE];
	int inning = 0;
	// Show application header
	cout << "Welcome to Tumbling Tigers !" << endl;
	cout << "--------------------------" << endl << endl;

	// Inning 1
	inning++; 
	cout << "Inning " << inning << endl;
	cout << "Enter Tiger runs: ";
	cin >> tigers[inning];
	cout << "Enter Blue Jay's runs: ";
	cin >> blueJays[inning];
	cout << endl;
	printBoxScore(tigers, blueJays, inning); // Print to screen

	// Inning 2
	inning++;
	cout << "\nInning " << inning << endl;
	cout << "Enter Tiger runs: ";
	cin >> tigers[inning];
	cout << "Enter Blue Jay's runs: ";
	cin >> blueJays[inning];
	cout << endl;
	printBoxScore(tigers, blueJays, inning); // Print to screen

	// Inning 3
	inning++;
	cout << "\nInning " << inning << endl;
	cout << "Enter Tiger runs: ";
	cin >> tigers[inning];
	cout << "Enter Blue Jay's runs: ";
	cin >> blueJays[inning];
	cout << endl;
	printBoxScore(tigers, blueJays, inning); // Print to screen

	// Inning 4
	inning++;
	cout << "\nInning " << inning << endl;
	cout << "Enter Tiger runs: ";
	cin >> tigers[inning];
	cout << "Enter Blue Jay's runs: ";
	cin >> blueJays[inning];
	cout << endl;
	printBoxScore(tigers, blueJays, inning); // Print to screen

	// Inning 5
	inning++;
	cout << "\nInning " << inning << endl;
	cout << "Enter Tiger runs: ";
	cin >> tigers[inning];
	cout << "Enter Blue Jay's runs: ";
	cin >> blueJays[inning];
	cout << endl;
	printBoxScore(tigers, blueJays, inning); // Print to screen

	// Print teams' most-run innings
	cout << "\nMost-runs innings" << endl;
	cout << "Tigers: " << teamHigh(tigers) << endl;
	cout << "Blue-Jays: " << teamHigh(blueJays) << endl;

	// Show application close
	cout << "\nEnd of Tumbling Tigers" << endl << endl;

	// Pause before application window closes
	cout << "Press any key to exit ..." << endl;
	_getch();

}

//==========================================================
// teamScore
//==========================================================
int teamScore(int runs[], int inning)
{
	int sum = 0;
	for (int i = 1; i <= inning; i++)
	{
		sum += runs[i];
	}
	return sum;
}

//==========================================================
// teamHigh
//==========================================================
int teamHigh(int runs[])
{
	int arrMax = 1;
	for (int i = 1; i < ARR_SIZE; i++)
	{
		if (runs[i] > runs[arrMax])
		{
			arrMax = i;
		}
	}
	return arrMax;
}

//==========================================================
// printBoxScore
//==========================================================
void printBoxScore(int runsUs[], int runsThem[], int inning)
{
	cout << "Box score after " << inning << " inning" << endl;
	cout << "--------------------------------" << endl;

	cout << left << setw(COLFMT[0]) << "Team"; // Show header row with inning numbers
	for (int i = 1; i <= inning; i++)
	{
		cout << setw(COLFMT[1]) << i;
	}
	cout << endl;

	cout << left << setw(COLFMT[0]) << "Tigers"; // Show scores for tigers up to the current inning
	for (int i = 1; i <= inning; i++)
	{
		cout << setw(COLFMT[1]) << runsUs[i];
	}
	cout << setw(COLFMT[1]) << teamScore(runsUs, inning) << endl;

	cout << left << setw(COLFMT[0]) << "Blue Jays";
	for (int i = 1; i <= inning; i++)
	{
		cout << setw(COLFMT[1]) << runsThem[i];
	}
	cout << setw(COLFMT[1]) << teamScore(runsThem, inning) << endl;
}