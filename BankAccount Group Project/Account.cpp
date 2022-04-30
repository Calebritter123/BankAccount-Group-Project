#include "Account.h"

double Bank::deposit(double amount) {
	cout << "Your old balance is: " << balance << "\n";
	balance = amount + balance;
	numDeposits++;
	cout << "Your new balance is " << balance << "\n";
	return balance;
}

double Bank::withdraw(double amount) {
	cout << "Your old balance is: " << balance << "\n";
	balance = balance - amount;
	numWithdrawals++;
	cout << "Your new balance is " << balance << "\n";
	return balance;
}

void Bank::calcInt() {
	balance = balance + (balance * (annualInterestRate/12));
}

double Bank::monthlyProc() {
	calcInt();
	balance = balance - monthlyServiceCharge;
	numDeposits = 0;
	numWithdrawals = 0;
	monthlyServiceCharge = 0;
	cout << "Your end of month balance is: " << balance << "\n";
	return balance;
}