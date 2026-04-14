#include <iostream>
using namespace std;

// This program will ask the user to enter BillValue and then add 10% service fee and 16% sales tax and then print it on the screen.

int main(){
    int billValue;
    float totalBill;

    cout << "Please enter the bill value: " << endl;
    cin >> billValue;

    totalBill = billValue + (billValue * 0.10);
    totalBill = totalBill + (totalBill * 0.16);

    cout << "The total bill after adding the service fee and tax sales is: " << totalBill << endl;

    return 0;
}