#include <iostream>
using namespace std;

// This Program will calculate circle area inscribed in an isosceles triangle, then print it on the screen.

int main(){
    float PI = 3.14;
    float a;
    float b;

    cout << "Please enter a value: " << endl;
    cin >> a;

    cout << "Please enter b value: " << endl;
    cin >> b;

    float circleAreaInscribedInAnIsoscelesTriangle = PI * ((b*b)/4) * (((2 * a) - b) / ((2 * a) + b));

    cout << "Circle area inscribed in an isosceles triangle is: " << circleAreaInscribedInAnIsoscelesTriangle << endl;

    return 0;
}