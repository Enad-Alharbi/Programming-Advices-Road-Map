#include <iostream>
#include <cmath>
using namespace std;

// This program will calculate Circle Area circle Described Around an Arbitrary Triangle, then use round funciton from cmath library and print it.

int main(){
    float PI = 3.14;
    int a;
    int b;
    int c;

    cout << "Please enter 'a' value: " << endl;
    cin >> a;

    cout << "Please enter 'b' value: " << endl;
    cin >> b;

    cout << "Please enter 'c' value: " << endl;
    cin >> c;

    float p = (a+b+c)/2;

    float circleAreaCircleDescribedAroundAnArbitraryTriangle = PI * pow((a*b*c)/(4 * sqrt(p * (p-a) * (p-b) * (p-c) )), 2);
    
    cout << "Circle Area circle Described Around an Arbitrary Triangle Before round function is: " << circleAreaCircleDescribedAroundAnArbitraryTriangle << endl;
    cout << "Circle Area circle Described Around an Arbitrary Triangle After round function is: " << round(circleAreaCircleDescribedAroundAnArbitraryTriangle) << endl;

    return 0;
}