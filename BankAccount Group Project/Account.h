#include <iostream>

using namespace std;

class Bank {
private:
	double balance;
	int numDeposits = 0;
	int numWithdrawals = 0;
	double annualInterestRate;
	double monthlyServiceCharge = 10.0;
public: 
	void setBalance(double bal);
	void setAnnualRate(double rate);
	double deposit(double amount);
	double withdraw(double amount);
	void calcInt();
	double monthlyProc();
};
