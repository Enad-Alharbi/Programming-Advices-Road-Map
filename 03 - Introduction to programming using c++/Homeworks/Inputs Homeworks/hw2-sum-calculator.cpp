#include <iostream> 
using namespace std;

// This program will ask the user to enter 3 numbers and then will sum them and print them.

int main(){ 

    int num1;
    int num2;
    int num3;

    cout << "Hello there!, this program will sum the next 3 numbers you will enter. " << endl;

    cout << "Please enter the first number: " << endl;
    cin >> num1;

    cout << "Please enter the second number: " << endl;
    cin >> num2;

    cout << "Please enter the third number: " << endl;
    cin >> num3;

    int sum = num1 + num2 + num3;

    cout << "--------------------------------------------------------------\n";
    cout << "Total = " << sum << endl;

    return 0;

}