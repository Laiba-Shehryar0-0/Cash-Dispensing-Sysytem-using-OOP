#include "CurrentAccount.h"
#include <string>
#include <iostream>
using namespace std;
CurrentAccount::CurrentAccount (int n, string t, double ib, double od):
Account (n, t, ib)
{
  overdraft = od;
}

void
CurrentAccount::withdraw (double amount)
{
  if (balance + overdraft >= amount)
    {
      balance -= amount;
      cout << "Withdrawn: $" << amount << " from account " << accountNumber <<
	endl;
    }
  else
    {
      cout << "Overdraft limit reached!" << endl;
    }
}

void
CurrentAccount::display ()
{
  Account::display ();
  cout << "Overdraft Limit: $" << overdraft << endl;
}
