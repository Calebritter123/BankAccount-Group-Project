#include "Checking.h"

double Checking::deposit(double amount) {
	return Bank::deposit(amount);
}

double Checking::withdraw(double amount) {
	if (balance - amount < 0) {
		return Bank::withdraw(amount) - 15;
	}
	else {
		return Bank::withdraw(amount);
	}
}

void Checking::setAnnualRate(double rate) {
	Bank::setAnnualRate(rate);
}

double Checking::monthlyProc() {
	balance = balance - (5 + (.1 * numWithdrawals));
	cout << "Checking: ";
	return Bank::monthlyProc();
}

void Checking::setBalance(double bal) {
	balance = bal;
}

