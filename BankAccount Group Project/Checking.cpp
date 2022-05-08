#include "Checking.h"

double Checking::deposit(double amount) {
	return Bank::deposit(amount);
}

double Checking::withdraw(double amount) {
	if (getBalance() - amount < 0) {
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
	setBalance(getBalance() - (5 * (.1 * numWithdrawals)));   
	cout << "Checking: ";
	return Bank::monthlyProc();
}

void Checking::setBalance(double bal) {
	Bank::setBalance(bal);
}

double Checking::getBalance() {
	return Bank::getBalance();
}

