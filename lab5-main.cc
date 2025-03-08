#include<iostream>
#include<string>

#include<BankRecord.h>

using namespace std;


int main() {
    BankRecord *myRecordPtr1, *myRecordPtr2;

    // TO-DO: Construct an object that myRecordPtr1, then assign
    //        the myRecordPtr2 to the same address as myRecordPtr1 stores
    myRecordPtr1 = new BankRecord("Marc", 1000.0);
    myRecordPtr2 = myRecordPtr1;

    cout << "Print Bank Record 1 before changing the amount:" << endl;
    // TO-DO: Add a line to print the object's contents pointed to by myRecordPtr1
    myRecordPtr1->Print();
    cout << endl;

    // TO-DO: Change the amount field for the object pointed to by myRecordPtr2
    myRecordPtr2->SetAmount(2000.0);

    cout << "Print Bank Record 1 AFTER changing the amount for Bank Record 2:" << endl;
    // TO-DO: Add a line to (AGAIN) print the object's contents pointed to by myRecordPtr1
    myRecordPtr1->Print();
    myRecordPtr2->Print();
    cout << endl;

    cout << "Print the two ADDRESSES:" << endl;
    // TO-DO: Add two lines to print the addresses of the two pointers
    cout << &myRecordPtr1 << endl;
    cout << &myRecordPtr2 << endl;
    cout << endl;

    // TO-DO: Deallocation the object pointed to by myRecordPtr1
    delete myRecordPtr1;

    // Everything is Okay
    return 0;
}
