#include <iostream>

using namespace std;

class Bank {
private:
	double balance = 100.0;
	int numDeposits = 0;
	int numWithdrawals = 0;
	double annualInterestRate = 2.0;
	double monthlyServiceCharge = 10.0;
public: 
	double deposit(double amount);
	double withdraw(double amount);
	void calcInt();
	double monthlyProc();
};
