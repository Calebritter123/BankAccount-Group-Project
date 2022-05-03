#include "Savings.h"

double Savings::deposit(double amount) {
	balance = balance + amount;
	return Bank::deposit(amount);
}

double Savings::withdraw(double amount) {
	if (!status) {
		cout << "Your account is deactivated until you give us more money. " << endl; 
		return balance;
	} else if (balance - amount < 25) {
		status = false;
		cout << "Account is now deactivated." << endl;
		balance = balance - amount;
		return Bank::withdraw(amount);
	} else {
			status = true;
			balance = balance - amount;
			return Bank::withdraw(amount);
	}
}



double Savings::monthlyProc() {
	if (numWithdrawals > 4) {
		balance = balance - numWithdrawals;
	}
	if (balance <= 25) {
		status = false;
	}	else {
			status = true;
	}
	cout << "Savings: ";
	return Bank::monthlyProc();
}

void Savings::setBalance(double bal) {
	balance = bal;
	Bank::setBalance(balance);
}

