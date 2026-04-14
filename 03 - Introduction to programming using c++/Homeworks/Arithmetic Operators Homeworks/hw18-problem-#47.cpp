#include <iostream>
using namespace std;

/* This program will ask the user to enter the Loan Amount and Monthly Payment and then calculate how many months you need to
settle the loan
*/

int main(){
    int loanAmount;
    int monthlyPayment;

    cout << "Enter the Loan Amount: " << endl;
    cin >> loanAmount;

    cout << "Enter the Monthly Payment: " << endl;
    cin >> monthlyPayment;

    int monthsToSettleTheLoan = loanAmount/monthlyPayment;
    cout << "You need " << monthsToSettleTheLoan << " months to settle the loan!" << endl;

    return 0;
}