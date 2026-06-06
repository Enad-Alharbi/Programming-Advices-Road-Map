#include <iostream>
using namespace std;

// This program will ask the user to enter 3 grades and then calculate the average and print it.

int main(){
    float grades[3];

    cout << "Please Enter Grade1: " << endl;
    cin >> grades[0];

    cout << "Please Enter Grade2: " << endl;
    cin >> grades[1];

    cout << "Please Enter Grade3: " << endl;
    cin >> grades[2];

    cout << "**************************\n";

    float averageGrades = (grades[0] + grades[1] + grades[2]) / 3;

    cout << "The average of grades is: " << averageGrades << endl;

    return 0;
}