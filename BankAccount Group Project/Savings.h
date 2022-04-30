#include "Checking.h"

class Savings : public Bank {
private:
	bool status = true; //true = active, false = inactive;
	double balance = 100.0;
	int numWithdrawals = 0;
public:
	double deposit(double amount);
	double withdraw(double amount);
	double monthlyProc();
};


