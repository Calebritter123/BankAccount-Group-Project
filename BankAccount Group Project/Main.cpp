// BankAccountCheckingSaving.cpp : This file contains the 'main' function. Program 
//execution beginsand ends there.
// Chapter 15 [Gaddis], Programming Challenge 14: Bank Accounts
#include <iostream>
#include <cctype>
#include "Savings.h"



using namespace std;
// Function prototype
void dispatch(int, Savings&, Checking&);
int main()
{
	int startNums;
	Savings savings; // A Savings object
	Checking checking; // A Checking object;

	cout << "Please enter your starting balance: " << endl;
	cin >> startNums;

	savings.setBalance(startNums);
	checking.setBalance(startNums);
	savings.setAnnualRate(.01);
	checking.setAnnualRate(.01);

	int choice; // To hold the user's menu choice
	do     // menu
	{
		cout << "\n\n******** BANK ACCOUNT MENU ********\n\n";
		cout << "1.  Savings Account Deposit\n";
		cout << "2.  Checking Account Deposit\n";
		cout << "3.  Savings Account Withdrawal\n";
		cout << "4.  Checking Account Withdrawal\n";
		cout << "5.  Update and Display Account Statistics\n";
		cout << "6.  Exit\n\n";
		cout << "Your choice, please: (1-6)  ";
		std::cin >> choice;
		// Validate the menu selection.
		while (choice < 1 || choice > 6)
		{
			cout << "Enter a number from 1 through 6 please: ";
			std::cin >> choice;
		}
		// Execute the user's choice.
		dispatch(choice, savings, checking);
	} while (choice != 6);
	return 0;
}
//*********************************************
// dispatch menu                              *
// This function executes the choice made by  *
// the user.                                  *
//*********************************************
void dispatch(int choice, Savings& savings, Checking& checking)
{
	double amount;
	switch (choice)
	{
	case 1: cout << "Enter amount to deposit: ";
		std::cin >> amount;
		savings.deposit(amount);
		break;
	case 2: cout << "Enter amount to deposit: ";
		std::cin >> amount;
		checking.deposit(amount);
		break;
	case 3: cout << "Enter amount to withdraw: ";
		std::cin >> amount;
		savings.withdraw(amount);
		break;
	case 4: cout << "Enter amount to withdraw: ";
		std::cin >> amount;
		checking.withdraw(amount);
		break;
	case 5: cin.ignore();
		savings.monthlyProc();
		cout << "\nPress a key to continue...  ";
		std::cin.get();
		checking.monthlyProc();
		
	}
}
	