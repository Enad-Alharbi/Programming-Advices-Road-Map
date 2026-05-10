#include <iostream>
using namespace std;

// This program will ask the user to enter 2 numbers and then it will swap and print them using functions.

void swapNumbers(int num1, int num2){
    int tempNum;
    tempNum = num1;
    num1 = num2;
    num2 = tempNum;

    cout << "Numbers after the swap operation: " << endl;
    cout << num1 << endl;
    cout << num2 << endl;
}

int main(){
    int num1; 
    int num2;
    
    cout << "Enter Number1: " << endl;
    cin >> num1;

    cout << "Enter Number2: " << endl;
    cin >> num2;

    cout << "Numbers before the swap operation: " << endl;
    cout << num1 << endl;
    cout << num2 << endl;

    swapNumbers(num1, num2);

    return 0;
}