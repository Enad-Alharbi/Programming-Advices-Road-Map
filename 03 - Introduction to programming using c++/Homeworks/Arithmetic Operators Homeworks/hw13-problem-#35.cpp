#include <iostream>
using namespace std;

/* This program will asks the user to enter Pennies, Nickels, Dimes, Quarters, Dollars and then calculate total pennies, total dollars
and print them on screen giving that : 
Penny = 1
Nickel = 5
Dime = 10
Quarter = 25
Dollar = 100 */

int main(){

    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int dollars;

    cout << "Enter the Pennies: " << endl;
    cin >> pennies;

    cout << "Enter the Nickels: " << endl;
    cin >> nickels;

    cout << "Enter the Dimes: " << endl;
    cin >> dimes;

    cout << "Enter the Quarters: " << endl;
    cin >> quarters;

    cout << "Enter the Dollars: " << endl;
    cin >> dollars;

    int totalPennies = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (dollars * 100);
    float totalDollars = (float)totalPennies/100;

    cout << "Total Pennies is: " << totalPennies << endl;
    cout << "Total Dollars is: " << totalDollars << endl;

    return 0;
}
