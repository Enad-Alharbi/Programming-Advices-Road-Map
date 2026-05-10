#include <iostream>
#include <cmath>
using namespace std;

/* This program will ask the user to enter the following values : 'a', 'b', and 'c',
 and then calculate the  Circle Area circle Described Around an Arbitrary Triangle using a function. */

 float calculateCircleAreaCircleDescribedAroundAnArbitraryTriangle(int a, int b, int c){
    float PI = 3.14;
    float p = (a + b + c)/2;

    float circleArea = PI * pow( float((a * b * c))/(4*sqrt(p * (p - a) * (p - b) * (p - c))) ,2);

    return circleArea;
 }

 int main(){
    int a, b, c;

    cout << "Please enter 'a' value: " << endl;
    cin >> a;

    cout << "Please enter 'b' value: " << endl;
    cin >> b;

    cout << "Please enter 'c' value: " << endl;
    cin >> c;

    cout << " Circle Area Circle Described Around an Arbitrary Triangle = " << calculateCircleAreaCircleDescribedAroundAnArbitraryTriangle(a, b, c) << endl;

    return 0;
 }