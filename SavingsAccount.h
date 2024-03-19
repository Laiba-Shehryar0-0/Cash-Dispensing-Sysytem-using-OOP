#pragma once
#include "Account.h"
#include <string>
#include <iostream>
using namespace std;
class SavingsAccount:public Account
{
private:
  double interestRate;

public:
    SavingsAccount (int n, string t, double ib, double r);
  void deposit (double amount);
  void display ();
};
