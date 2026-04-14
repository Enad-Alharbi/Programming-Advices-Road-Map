#include <iostream> 
using namespace std;

// This program will ask the user for 2 numbers, and then calculate the following : num1+num2, num1-num2, num1*num2, num1/num2, num1%num2.

int main(){

    int num1;
    int num2;

    cout << "Please enter the first number A: " << endl;
    cin >> num1;

    cout << "Please enter the second number B: " << endl;
    cin >> num2;

    cout << "A + B = " << num1 + num2 << endl;
    cout << "A - B = " << num1 - num2 << endl;
    cout << "A * B = " << num1 * num2 << endl;
    cout << "A / B = " << num1 / num2 << endl;
    cout << "A % B = " << num1 % num2 << endl;

    return 0;
}