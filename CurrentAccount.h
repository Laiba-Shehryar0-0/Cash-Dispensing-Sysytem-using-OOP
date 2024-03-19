#pragma once
#include "Account.h"
#include <string>
#include <iostream>
using namespace std;
class CurrentAccount:public Account
{
  double overdraft;

public:
    CurrentAccount (int n, string t, double ib, double od);
  void withdraw (double amount);
  void display ();
};
