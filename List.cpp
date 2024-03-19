#include <string>
#include <iostream>
using namespace std;
#include "List.h"
void
List::Read ()
{
  string s1, s2, s3, s4, s5;
  ifstream ifile ("input.txt");
  for (int i = 0; i < 10; i++)
    {
      getline (ifile, s1, ',');
      getline (ifile, s2, ',');
      getline (ifile, s3, ',');
      getline (ifile, s4, ',');
      getline (ifile, s5);
      if (s1 == "S")
	{
	  A[i] = new SavingsAccount (stoi (s2), s3, stod (s4), stod (s5));
	}
      else
	{
	  A[i] = new CurrentAccount (stoi (s2), s3, stod (s4), stod (s5));
	}
      A[i]->display ();
    }
  ifile.close ();
}

void
List::Search ()
{
  bool found = false;
  int D;
  cout << "\n Enter Account Number: ";
  cin >> D;
  for (int i = 0; i < 10 && found == false; i++)
    {
      if (D == A[i]->tellAccN ())
	{
	  A[i]->display ();
	  found = true;
	}
    }
  if (found == false)
    cout << "\n Not found.";
}

void
List::Updatedata ()
{
  bool found = false;
  int N;
  cout << "\n Enter Account Number: ";
  cin >> N;
  for (int i = 0; i < 10 && found == false; i++)
    {
      if (N == A[i]->tellAccN ())
	{
	  A[i]->display ();
	  A[i]->get ();
	  A[i]->display ();
	  found = true;
	}
    }
  if (found == false)
    cout << "\n Not found.";
}

void
List::AccBalance ()
{
  bool found = false;
  int K;
  cout << "Enter Account Number" << endl;
  cin >> K;
  for (int i = 0; i < 10 && found == false; i++)
    {
      if (K == A[i]->tellAccN ())
	{
	  cout << "Account Balance is " << A[i]->tellBal () << endl;
	  found = true;
	}
    }
  if (found == false)
    cout << "\n Not found.";
}

void
List::Highest ()
{
  double max = A[0]->tellBal ();
  int index = 0;
  for (int i = 0; i < 10; i++)
    {
      if (max < A[i]->tellBal ())
	{
	  max = A[i]->tellBal ();
	  index = i;
	}
    }
  A[index]->display ();
}

void
List::Writeofile ()
{
  ofstream ofile ("output.txt");
  for (int i = 0; i < 10; i++)
    {
      ofile << A[i]->tellAccN ();
      ofile << "," << A[i]->tellBal () << endl;
    }
  ofile.close ();
}

void
List::Total ()
{
  double sum = 0;
  for (int i = 0; i < 10; i++)
    {
      sum = sum + A[i]->tellBal ();
    }
  cout << "Total Account Balance " << sum << endl;
}

void
List::Withdraw ()
{
  bool found = false;
  int E;
  double Amount1;
  cout << "Enter Account Number " << endl;
  cin >> E;
  for (int i = 0; i < 10 && found == false; i++)
    {
      if (E == A[i]->tellAccN ())
	{
	  cout << "Enter Amount you want to withdraw :" << endl;
	  cin >> Amount1;
	  A[i]->withdraw (Amount1);
	  found = true;
	}
    }
  if (found == false)
    cout << "\n Not found.";
}

void
List::Deposit ()
{
  bool found = false;
  int G;
  double Amount2;
  cout << "Enter Account Number" << endl;
  cin >> G;
  for (int i = 0; i < 10 && found == false; i++)
    {
      if (G == A[i]->tellAccN ())
	{
	  cout << "Enter Amount you want to deposit :" << endl;
	  cin >> Amount2;
	  A[i]->deposit (Amount2);
	  found = true;
	}
    }
  if (found == false)
    cout << "\n Not found.";
}

List::~List ()
{
  for (int i = 0; i < 10; i++)
    {
      delete A[i];
    }
}
