#include "Savings.h"

double Savings::deposit(double amount) {
	return Bank::deposit(amount);
}

double Savings::withdraw(double amount) {
	if (!status) {
		cout << "Your account is deactivated until you give us more money. " << endl; 
		return getBalance();
	} else if (getBalance() - amount < 25) {
		status = false;
		cout << "Account is now deactivated." << endl;
		return Bank::withdraw(amount);
	} else {
			status = true;
			return Bank::withdraw(amount);
	}
}



double Savings::monthlyProc() {
	if (numWithdrawals > 4) {
		setBalance(getBalance() - numWithdrawals);
	}
	if (getBalance() <= 25) {
		status = false;
	}	else {
			status = true;
	}
	cout << "Savings: ";
	return Bank::monthlyProc();
}

void Savings::setBalance(double bal) {
	Bank::setBalance(bal);
}

double Savings::getBalance() {
	return Bank::getBalance();
}
