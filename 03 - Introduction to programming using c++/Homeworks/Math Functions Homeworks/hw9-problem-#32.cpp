#include <iostream>
#include <cmath>
using namespace std;

// This program will ask the user to enter a number and a power to that number, then use round function from cmath library and print it.

int main(){
    int num;
    int power;

    cout << "Please enter the number: " << endl;
    cin >> num;

    cout << "Please enter the power: " << endl;
    cin >> power;

    cout << num << " ^ " << power << " = " << round(pow(num,power)) << endl;

    return 0;
}