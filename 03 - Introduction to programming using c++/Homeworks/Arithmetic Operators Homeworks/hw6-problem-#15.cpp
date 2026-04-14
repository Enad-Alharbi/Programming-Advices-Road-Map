#include <iostream>
using namespace std;

// This program will calculate a rectangle area and print it on the screen.

int main(){

    int a;
    int b;

    cout << "Enter the first number a: " << endl;
    cin >> a;

    cout << "Enter the second number b: " << endl;
    cin >> b;

    int rectangleArea = a * b;

    cout << "The Rectangle area is: " << rectangleArea << endl;

    return 0;
}