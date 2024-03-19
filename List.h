#include <iostream>
#pragma once
#include <fstream>
#include <string>
#include "Account.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"

using namespace std;

class List
{
  Account *A[10];
public:
  void Read ();
  void Search ();
  void AccBalance ();
  void Updatedata ();
  void Highest ();
  void Writeofile ();
  void Total ();
  void Withdraw ();
  void Deposit ();
   ~List ();
};
