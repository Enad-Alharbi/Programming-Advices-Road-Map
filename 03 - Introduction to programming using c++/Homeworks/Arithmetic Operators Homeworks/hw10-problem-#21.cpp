#include <iostream>
using namespace std;

// This program will calculate circle area along the circumference, then print it on the screen.

int main(){
    float PI = 3.14;
    int l;

    cout << "Please enter L value: " << endl;
    cin >> l;

    float circleAreaAlongTheCircumference = (l*l)/(4*PI);

    cout << "Circle area along the circumfernce is: " << circleAreaAlongTheCircumference << endl;
    
    return 0;
}