#include <iostream>
using namespace std;

// This program is supposed to print id card using variables.

int main(){

    string name = "Enad Alharbi";
    int age = 21;
    string city = "Makkah";
    string country = "Saudi Arabia";
    int monthlySalary = 990;
    int yearlySalary = monthlySalary * 12;
    char gender = 'M';
    bool isMarried = 0;

    cout << "******************************************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthlySalary << endl;
    cout << "Yearly Salary: " << yearlySalary << endl;
    cout << "Gender: " << gender << endl;
    cout << "Is Married?: " << isMarried << endl;
    cout << "******************************************\n";


    return 0;
}
