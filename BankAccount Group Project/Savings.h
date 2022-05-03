#include "Checking.h"

class Savings : public Bank {
private:
	bool status = true; //true = active, false = inactive;
	double balance;
	int numWithdrawals = 0;
public:
	void setBalance(double bal);
	double deposit(double amount);
	double withdraw(double amount);
	double monthlyProc();
};


