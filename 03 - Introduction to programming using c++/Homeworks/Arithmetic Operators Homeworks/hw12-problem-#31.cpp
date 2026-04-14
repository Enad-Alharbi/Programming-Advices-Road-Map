#include <iostream>
using namespace std;

// This program will ask the user to enter a number and then print the power of 2, 3 and 4 for this number.

int main(){
    int num;

    cout << "Please enter a number: " << endl;
    cin >> num;

    cout << num << "^2 is : " << num*num << endl;
    cout << num << "^3 is : " << num*num*num << endl;
    cout << num << "^4 is : " << num*num*num*num << endl;

    return 0;
}