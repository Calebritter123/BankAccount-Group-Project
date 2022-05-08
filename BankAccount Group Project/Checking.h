#include "Account.h"

class Checking : public Bank {
private:
	int numDeposits = 0;
	int numWithdrawals = 0;
public:
	void setBalance(double bal);	//remove and use getBalance
	void setAnnualRate(double rate);
	double deposit(double amount);
	double withdraw(double amount);
	double monthlyProc();
	double getBalance();
};

