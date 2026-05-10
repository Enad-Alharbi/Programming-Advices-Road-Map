#include <iostream>
#include <cmath>
using namespace std;

/* This program will ask the user to enter a and d and then calculate 
the Rectangle area Through Diagonal and Side Area */

float calculateRectangleAreaThroughDiagonalAndSideArea(int a, int d){
    float rectangleAreaThroughDiagonalAndSideArea = a * sqrt((pow(d,2) - pow(a,2)));

    return rectangleAreaThroughDiagonalAndSideArea;
}

int main(){
    int a, d;

    cout << "Please enter 'a' value: " << endl;
    cin >> a;

    cout << "Please enter 'd' value: " << endl;
    cin >> d;

    cout << calculateRectangleAreaThroughDiagonalAndSideArea(a,d) << endl;

    return 0;
}