#include <iostream>
#include <cmath>
using namespace std;

// This program will calculate the circle area and then ceil the final output using ceil function from cmath library

int main(){
    float PI = 3.14;
    int r;

    cout << "Please enter 'r' value: " << endl;
    cin >> r;

    float circleArea = PI * pow(r,2);

    cout << "Circle Area before ceil function: " << circleArea << endl;
    cout << "Circle Area after ceil function : " << ceil(circleArea) << endl;

    return 0;
}