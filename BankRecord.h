#ifndef BANKRECORD_H_
#define BANKRECORD_H_

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


class BankRecord {
public:
  BankRecord(string inName, double inAmount);

  string GetName() const;
  void SetName(string inName);

  double GetAmount() const;
  void SetAmount(double inAmount);

  void Print() const;

private:
  string name_;
  double amount_;
};

#endif
