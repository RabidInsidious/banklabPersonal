#include<BankRecord.h>

// Initilization constructor for the bank record
BankRecord::BankRecord(string inName, double inAmount) {
  name_ = inName;
  amount_ = inAmount;
}


// Accessor and mutator for Name
string BankRecord::GetName() const {
    return name_;
}

void BankRecord::SetName(string inName) {
    name_ = inName;
}

// Accessor and mutator for Amount
double BankRecord::GetAmount() const {
    return amount_;
}

void BankRecord::SetAmount(double inAmount) {
    amount_ = inAmount;
}


// Print utility function
void BankRecord::Print() const {
    cout << "  " << std::setw(25) << left << GetName()  << setw(15) << right << "$" << GetAmount() << endl;
}
