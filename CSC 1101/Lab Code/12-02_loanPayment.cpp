//==========================================================
//
// Title:      Lizard Lenders
// Course:     CSC 1101
// Lab Number: 11-02
// Author:     Trevor Trusty
// Date:       3/1/2019
// Description:
//    This C++ console application uses a for loop to calculate
// how many months to repay user's car loan.
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

void vLoop(double money, int x, int y, string type)
{
	while (money < x || money > y)
	{
		cout << '$' << money << " is an incorrect " << type << " amount." << endl;
		cout << "\nEnter " << type << " ($) amount between $ " << x << " and $" << y << ": ";
		cin >> money;
		cout << endl;
	}
}

int main()
{
	//Declare variables
	double loan, monthPay, rate, balance, interest, principal, month;
	//Declare constants
	const int W = 14; //column width

  // Show application header
  cout << "Welcome to Lizard Lenders!" << endl;
  cout << "--------------------------" << endl << endl;

  //Prompt for and get loan amount
  cout << "Enter car loan ($) between $1000 and $5000: ";
  cin >> loan;

  //Check for incorrect loan, reprompt
  vLoop(loan, 1000, 5000, "loan");
  
  //Prompt for and get monthly payment
  cout << "Enter current monthly payment ($) between $100 and $500: ";
  cin >> monthPay;

  //Check for incorrect amount, reprompt
  vLoop(monthPay, 100, 500, "payment");

  //Prompt for and get interest factor
  cout << "\nEnter annual interest (%) between 2% and 5%: ";
  cin >> rate;
  cout << endl;

  //Check for incorrect value, reprompt
  while (rate < 2 || rate > 5)
  {
	  cout << rate << "% is an incorrect interest value." << endl;
	  cout << "\nEnter annual interest (%) between 2% and 5%: ";
	  cin >> rate;
	  cout << endl;
  }

  //Convert rate to decimal
  rate = rate / 12 / 100;
  balance = loan;

  //Start table-header
  cout << setw(W) << right << "Month";
  cout << setw(W) << right << "Balance($)";
  cout << setw(W) << right << "Payment($)";
  cout << setw(W) << right << "Interest($)";
  cout << setw(W) << right << "Principal($)" << endl;

  //loop until balance is paid
  for (int m = 1; balance > 0; m++)
  {
	  interest = balance * rate;
	  principal = monthPay - interest;
	  balance = balance - principal;

	  cout << setw(W) << right << m;
	  cout << setw(W) << right << balance;
	  cout << setw(W) << right << monthPay;
	  cout << setw(W) << right << interest;
	  cout << setw(W) << right << principal << endl;
	  month = m; //initializing new month var
  }

  cout << "\nMonths to repay loan: " << month << endl;

  // Show application close
  cout << "\nEnd of Lizard Lenders" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
