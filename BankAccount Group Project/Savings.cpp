#include "Savings.h"

double Savings::deposit(double amount) {
	return Bank::deposit(amount);
}

double Savings::withdraw(double amount) {
	if (balance < 25) {
		status = false;
		return balance;
	} else {
		status = true;
		return Bank::withdraw(amount);
	}
}

double Savings::monthlyProc() {
	if (numWithdrawals > 4) {
		balance = balance - numWithdrawals;
	}
	if (balance <= 25) {
		status = false;
	}
	else {
		status = true;
	}
	cout << "Savings: ";
	return Bank::monthlyProc();
}