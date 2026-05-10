#include <iostream>
#include <cmath>
using namespace std;

// This program will ask the user to enter 'a' and 'b' value and then calculate Circle Area Inscribed in an Isosceles Triangle using a function.

float calculateCircleAreaInscribedInAnIsoscelesTriangle(int a, int b){
    float PI = 3.14;

    float circleAreaInscribedInAnIsoscelesTriangle = (PI * (pow(b,2)/4) * (float((2 * a - b)) / (2 * a + b)));

    return circleAreaInscribedInAnIsoscelesTriangle;
}

int main(){
    int a, b;

    cout << "Please enter 'a' value: " << endl;
    cin >> a;

    cout << "Please enter 'b' value: " << endl;
    cin >> b;

    cout << "Circle Area Inscribed In An Isosceles Triangle = " << calculateCircleAreaInscribedInAnIsoscelesTriangle(a,b) << endl;

    return 0;
}