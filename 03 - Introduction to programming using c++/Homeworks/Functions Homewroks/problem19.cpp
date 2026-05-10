#include <iostream>
#include <cmath>
using namespace std;

// This program will ask the user to enter 'D' value and then calculate Circle Area Through Diameter using a function.

float calculateCircleAreaThroughDiameter(int D){
    float PI = 3.14;

    float circleAreaThroughDiameter = (PI * pow(D,2))/4;

    return circleAreaThroughDiameter;
}

int main(){
    int D;

    cout << "Please enter 'D' value: " << endl;
    cin >> D;

    cout << "Circle Area Through Diameter = " << calculateCircleAreaThroughDiameter(D) << endl;

    return 0;
}