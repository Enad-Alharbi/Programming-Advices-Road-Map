#include <iostream>
using namespace std;

// This program will ask the user to enter 3 grades and then calculate the average and print it.

void readGrades(float grades[3]){

    cout << "Please Enter Grade1: " << endl;
    cin >> grades[0];

    cout << "Please Enter Grade2: " << endl;
    cin >> grades[1];

    cout << "Please Enter Grade3: " << endl;
    cin >> grades[2];
}

float calculateAverageGrades(float grades[3]){
    return (grades[0] + grades[1] + grades[2]) / 3;
}

void printAverageGrades(float averageGrades){
    cout << "************************\n";

    cout << "The Average of grades is: " << averageGrades << endl;
}

int main(){
    float grades[3];

    readGrades(grades);

    float averageGrades = calculateAverageGrades(grades);

    printAverageGrades(calculateAverageGrades(grades));

    return 0;
}