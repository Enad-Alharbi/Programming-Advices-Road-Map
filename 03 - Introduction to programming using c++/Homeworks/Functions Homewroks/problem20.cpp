#include <iostream>
#include <cmath>
using namespace std;

// This program will ask the user to enter the 'A' value, and then calculate Circle Area Inscribed in a Square.

float calculateCircleAreaInscribedInASquare(int A){
    float PI = 3.14;
    float circleAreaInscribedInASquare =  (PI * pow(A,2))/4;
    
    return circleAreaInscribedInASquare;
}

int main(){
    int A;

    cout << "Please enter 'A' value: " << endl;
    cin >> A;

    cout << "Circle Area Inscribed in a Square = " << calculateCircleAreaInscribedInASquare(A) << endl;

    return 0;
}