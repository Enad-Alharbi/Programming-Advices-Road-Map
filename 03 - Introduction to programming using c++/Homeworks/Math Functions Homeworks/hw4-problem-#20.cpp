#include <iostream>
#include <cmath>
using namespace std;

// This program will calulate circle area inscribed in a square, then use ceil function from cmath library on the output and print it.

int main(){
    float PI = 3.14;
    int a;

    cout << "Please enter the 'A' value: " << endl;
    cin >> a;

    float circleAreaInscribedInASquare = (PI * pow(a,2))/4;

    cout << "Circle Area Inscribed In A Square Before ceil function is: " << circleAreaInscribedInASquare << endl;
    cout << "Circle Area Inscribed In A Square After ceil function is: " << ceil(circleAreaInscribedInASquare) << endl;

    return 0;
}