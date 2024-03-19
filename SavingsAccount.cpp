#include "SavingsAccount.h"
#include <string>
#include <iostream>
using namespace std;
SavingsAccount::SavingsAccount (int n, string t, double ib, double r):
Account (n, t, ib)
{
  interestRate = r;
}

void
SavingsAccount::deposit (double amount)
{
  double totalAmount = amount + (amount * interestRate / 100);
  Account::deposit (totalAmount);
}

void
SavingsAccount::display ()
{
  Account::display ();
  cout << "Interest Rate: " << interestRate << "%" << endl;
}
