#include <iostream>
using namespace std;

// This Program will ask the user to enter 2 numbers A and B and then apply the following relational operators to these 2 numbers : ==, !=, >, <, >=, <=.

int main(){
    int firstNumber;
    int secondNumber;

    cout << "Please enter the first number A: " << endl;
    cin >> firstNumber;

    cout << "Please enter the seconds number B: " << endl;
    cin >> secondNumber;

    cout << firstNumber << " == " << secondNumber << " ?: " << (firstNumber==secondNumber) << endl;
    cout << firstNumber << " != " << secondNumber << " ?: " << (firstNumber!=secondNumber) << endl;
    cout << firstNumber << " > " << secondNumber << " ?: " << (firstNumber>secondNumber) << endl;
    cout << firstNumber << " < " << secondNumber << " ?: " << (firstNumber<secondNumber) << endl;
    cout << firstNumber << " >= " << secondNumber << " ?: " << (firstNumber>=secondNumber) << endl;
    cout << firstNumber << " <= " << secondNumber << " ?: " << (firstNumber<=secondNumber) << endl;

    return 0;
}