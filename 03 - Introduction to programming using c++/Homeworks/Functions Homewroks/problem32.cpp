#include <iostream> 
#include <cmath>
using namespace std;

// This program will ask the user to enter a number and a power, and the calculate the number to the power that the user entered.

int calculateNumberToThePower(int number, int power){
    int result = pow(number, power);

    return result;
}

int main(){
    int number, power;

    cout << "Please enter your number: " << endl;
    cin >> number;

    cout << "Please enter the power: " << endl;
    cin >> power;

    cout << number << " ^ " << power << " = " << calculateNumberToThePower(number, power) << endl;

    return 0;
}