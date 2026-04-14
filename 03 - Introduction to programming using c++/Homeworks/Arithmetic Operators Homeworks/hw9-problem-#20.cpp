#include <iostream>
using namespace std;

// This program will calculate circle area inscribed in a square, then print it on the screen.

int main(){
    float PI = 3.14;
    int a;

    cout << "Please enter A value: " << endl;
    cin >> a;

    float circleAreaInscribedInASquare = (PI * (a*a))/4;

    cout << "Circle area inscribed in a square is: " << circleAreaInscribedInASquare << endl;

    return 0;
}