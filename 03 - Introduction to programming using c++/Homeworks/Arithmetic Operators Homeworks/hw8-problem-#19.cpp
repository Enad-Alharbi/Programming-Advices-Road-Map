#include <iostream>
using namespace std;

// This program will calculate circle area through diameter, then print it on the screen

int main(){
    float PI = 3.14;
    int d;

    cout << "Please enter D value: " << endl;
    cin >> d;

    float circleAreaThroughDiameter = (PI * (d*d))/4;

    cout << "Circle area through diameter is: " << circleAreaThroughDiameter << endl;

    return 0;
}