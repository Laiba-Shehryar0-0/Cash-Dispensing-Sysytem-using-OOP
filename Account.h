#pragma once
#include <string>
#include <iostream>
using namespace std;
class Account
{
protected:
  int accountNumber;
  string name;
  double balance;

public:
    Account (int n, string t, double ib);
  virtual void deposit (double amount);
  virtual void withdraw (double amount);
  virtual void display ();
  void get ();
  int tellAccN ()
  {
    return accountNumber;
  }
  double tellBal ()
  {
    return balance;
  }
};
