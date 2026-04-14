#include <iostream> 
using namespace std;

// This program will ask the user to enter 3 numbers, and then sum them and print them.

int main(){

    int num1;
    int num2;
    int num3;

    cout << "Please enter your first number X: " << endl;
    cin >> num1;

    cout << "Please enter your second number Y: " << endl;
    cin >> num2;

    cout << "Please enter your third number Z: " << endl;
    cin >> num3;

    cout << "X + Y + Z = " << num1+num2+num3 << endl;

    return 0;
}