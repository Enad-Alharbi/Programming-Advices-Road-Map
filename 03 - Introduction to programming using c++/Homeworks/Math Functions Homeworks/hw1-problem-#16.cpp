#include <iostream>
#include <cmath>
using namespace std;

// This program will calculate rectangle area through diagonal and side area of rectangle using cmath functions and print it on the screen.

int main(){
    int a;
    int d;

    cout << "Please enter 'a' value: " << endl;
    cin >> a;

    cout << "Please enter 'd' value: " << endl;
    cin >> d;

    float rectangleAreaThroughDiagonalAndSideAreaOfRectangle = a * sqrt(pow(d,2) - pow(a,2));

    cout << "Rectangle Area Through Diagonal And Side Area Of Rectangle = " << rectangleAreaThroughDiagonalAndSideAreaOfRectangle << endl;

    return 0;
}