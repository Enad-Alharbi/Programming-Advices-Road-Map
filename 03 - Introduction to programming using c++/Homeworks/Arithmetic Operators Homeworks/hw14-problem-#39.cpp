#include <iostream>
using namespace std;

// This program will read a TotalBill and CashPaid and calculate the remainder to be paid back and print it on the screen.

int main(){
    int totalBill;
    int cashPaid;

    cout << "Please enter the total bill: " << endl;
    cin >> totalBill;

    cout << "Please enter the cash paid: " << endl;
    cin >> cashPaid;

    int remainder = cashPaid - totalBill;

    cout << "The remainder is: " << remainder << endl;

    return 0;
}