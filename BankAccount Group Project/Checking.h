#include "Account.h"

class Checking : public Bank {
private:
	double balance = 100.0;
	int numDeposits = 0;
	int numWithdrawals = 0;
public:
	double deposit(double amount);
	double withdraw(double amount);
	double monthlyProc();
};

