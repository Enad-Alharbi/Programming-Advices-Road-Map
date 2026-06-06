#include <iostream>
using namespace std;

// This program will use the by reference parameter to swap numbers.

void swapNumbers(int &num1, int &num2){
    int tempNum;
    
    tempNum = num1;
    num1 = num2;
    num2 = tempNum;

    cout << "\033[32m" << "Number 1 after swap in swapNumbers function: " << num1 << endl;
    cout << "\033[32m" << "Number 2 after swap in swapNumbers function: " << num2 << endl;

}

int main(){
    int num1, num2;

    cout << "Enter number 1: " << endl;
    cin >> num1;

    cout << "Enter number 2: " << endl;
    cin >> num2;

    cout << "\033[31m" << "Number 1 before swap: " << num1 << endl;
    cout << "\033[31m" << "Number 2 before swap: " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "\033[34m" << "Number 1 after swap in main function: " << num1 << endl;
    cout << "\033[34m" << "Number 2 after swap in main function: " << num2 << endl;

    return 0;

}