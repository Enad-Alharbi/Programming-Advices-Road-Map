#include <iostream>
using namespace std;

/* This program will ask the user to enter the Loan Amount and how many months he need to settle the loan, and then calculate
the monthly installment amount */

int main(){
    int loanAmount;
    int monthsToSettleTheLoan;

    cout << "Please enter the Loan Amount: " << endl;
    cin >> loanAmount;

    cout << "Please enter how many months do you need to settle the loan: " << endl;
    cin >> monthsToSettleTheLoan;

    int monthlyPayment = loanAmount/monthsToSettleTheLoan;

    cout << "You need to pay " << monthlyPayment << "$ for " << monthsToSettleTheLoan << " months to settle the loan!" << endl;

    return 0;
}