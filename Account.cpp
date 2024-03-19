#include "Account.h"
#include <string>
#include <iostream>
using namespace std;

Account::Account (int n, string t, double ib)
{
  accountNumber = n;
  name = t;
  balance = ib;
}

void
Account::deposit (double amount)
{
  balance += amount;
  cout << "Deposited: $" << amount << " into account " << accountNumber <<
    endl;
  cout << "New Balance " << balance << endl;
}

void
Account::withdraw (double amount)
{
  if (balance >= amount)
    {
      balance -= amount;
      cout << "Withdrawn: $" << amount << " from account " << accountNumber <<
	endl;
      cout << "Balance " << balance;
    }
  else
    {
      cout << "Insufficient funds!" << endl;
    }
}

void
Account::display ()
{
  cout << "Account Number: " << accountNumber << endl;
  cout << "Acccount Holder: " << name << endl;
  cout << "Balance: $" << balance << endl;
}

void
Account::get ()
{
  cout << "Enter Balance" << endl;
  cin >> balance;
}
