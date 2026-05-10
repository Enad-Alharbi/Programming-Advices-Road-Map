#include <iostream>
#include <cmath>
using namespace std;

// This program will ask the user to enter 'r' value and calculate the Circle Area using a function.

float calculateCircleArea(int r){
    float PI = 3.14;

    float circleArea = PI * pow(r,2);

    return circleArea;
}

int main(){
    int r;

    cout << "Please enter 'r' value: " << endl;
    cin >> r;

    cout << "Circle Area = " << calculateCircleArea(r) << endl;

    return 0;
}