#include <iostream>
using namespace std;

// This program will ask the user to enter 2 numbers, and then it will print them normally and swapped.

int main() {
    
    int num1;
    int num2;

    cout << "Please enter your first number: " << endl;
    cin >> num1;

    cout << "Please enter your second number: " << endl;
    cin >> num2;

    cout << "Your numbers are: " << endl;
    cout << num1 << endl;
    cout << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Your swapped numbers are: " << endl;
    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}