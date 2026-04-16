#include <iostream>
#include <cmath>
using namespace std;

// This program will calculate circle area through diameter, then use ceil function from cmath library and print it.

int main(){
    float PI = 3.14;
    int d;

    cout << "Please enter 'D' value: " << endl;
    cin >> d;

    float circleAreaThroughDiameter = (PI * pow(d,2))/4;

    cout << "Circle Area Through Diameter before ceil function is: " << circleAreaThroughDiameter << endl;
    cout << "Circle Area Through Diameter after ceil function is: " << ceil(circleAreaThroughDiameter) << endl;

    return 0;
}