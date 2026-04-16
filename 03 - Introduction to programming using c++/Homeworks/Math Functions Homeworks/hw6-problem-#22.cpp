#include <iostream>
#include <cmath>
using namespace std;

// This program will calculate Circle Area Inscribed in an Isosceles Triangle, then use floor function from cmath library and print it.

int main(){
    float PI = 3.14;
    float a;
    float b;

    cout << "Please enter 'a' value: " << endl;
    cin >> a;

    cout << "Please enter 'b' value: " << endl;
    cin >> b;

    float circleAreaInscribedInAnIsoscelesTriangle = PI * (pow(b,2)/4) * ((2*a-b)/(2*a+b));

    cout << "Circle Area Inscribed in an Isosceles Triangle Before floor function is: " << circleAreaInscribedInAnIsoscelesTriangle << endl;
    cout << "Circle Area Inscribed in an Isosceles Triangle After floor function is: " << floor(circleAreaInscribedInAnIsoscelesTriangle) << endl;

    return 0;
}