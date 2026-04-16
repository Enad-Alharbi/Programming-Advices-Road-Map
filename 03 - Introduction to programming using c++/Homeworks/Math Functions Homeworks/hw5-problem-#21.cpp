#include <iostream>
#include <cmath>
using namespace std;

// This program will calculalte Circle Area Along The Circumference, then use floor function from cmath library and print it.

int main(){
    float PI = 3.14;
    int l;

    cout << "Please enter the 'L' value: " << endl;
    cin >> l;

    float circleAreaAlongTheCircumference = pow(l,2)/(4*PI);

    cout << "Circle Area Along The Circumference Before floor function is: " << circleAreaAlongTheCircumference << endl;
    cout << "Circle Area Along The Circumference After floor function is: " << floor(circleAreaAlongTheCircumference) << endl;

    return 0;
}