#include <iostream>
using namespace std;

// This program will ask the user to enter a and b and then calcualte the Rectangle area.

int calculateRectangleArea(int a, int b){
    int rectangleArea = a * b;

    return rectangleArea;
}

int main(){
    int a, b;

    cout << "Please enter 'a' value: " << endl;
    cin >> a;

    cout << "Please enter 'b' value: " << endl;
    cin >> b;

    cout << "The Rectangle area = " << calculateRectangleArea(a,b) << endl;

    return 0;
}