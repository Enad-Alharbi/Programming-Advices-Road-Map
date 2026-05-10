#include <iostream>
#include <cmath>
using namespace std;

// This program will ask the user to enter a number and then then calculate and print number to the power of 2, 3 and 4.

void calculatePowerOfTwoThreeAndFour(int num){
    cout << num << " ^ 2 = " << pow(num, 2) << endl;
    cout << num << " ^ 3 = " << pow(num, 3) << endl;
    cout << num << " ^ 4 = " << pow(num, 4) << endl;
}

int main(){
    int num;

    cout << "Please enter your number: " << endl;
    cin >> num;

    calculatePowerOfTwoThreeAndFour(num);

    return 0;
}