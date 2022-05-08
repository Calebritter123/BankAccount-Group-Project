#include "Checking.h"

class Savings : public Bank {
private:
	bool status = true; //true = active, false = inactive;
	int numWithdrawals = 0;
public:
	void setBalance(double bal);		//remove and use getBalance
	double getBalance();
	double deposit(double amount);
	double withdraw(double amount);
	double monthlyProc();
};


