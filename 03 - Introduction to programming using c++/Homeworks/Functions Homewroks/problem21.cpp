#include <iostream>
#include <cmath>
using namespace std;

// This program will ask the user to enter the 'L' value and then calculate Circle Area Along the Circumference using a functions.

float calculateCircleAreaAlongTheCircumference(int L){
    float PI = 3.14;

    float circleAreaAlongTheCircumference = pow(L, 2)/(4 * PI);

    return circleAreaAlongTheCircumference;
}

int main(){
    int L;

    cout << "Please enter 'L' value: " << endl;
    cin >> L;

    cout << "Circle Area Along the Circumference = " << calculateCircleAreaAlongTheCircumference(L) << endl;
    
    return 0;
}