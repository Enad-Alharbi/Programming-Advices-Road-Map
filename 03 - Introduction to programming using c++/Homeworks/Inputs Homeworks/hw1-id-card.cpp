#include <iostream>
using namespace std;

// This program will ask the user for information and the print it.

int main(){

    string name;
    int age;
    string city;
    string country;
    int monthlySalary;
    char gender;
    bool isMarried;

    cout << "Please enter your name: " << endl;
    cin >> name;

    cout << "Please enter your age: " << endl;
    cin >> age;

    cout << "Please enter your city: " << endl;
    cin >> city;

    cout << "Please enter your country: " << endl;
    cin >> country;

    cout << "Please enter your monthly salary: " << endl;
    cin >> monthlySalary;

    cout << "Please enter your gender (M for Male and F for Female): " << endl;
    cin >> gender;

    cout << "Please enter if you are married (1 for Yes and 0 for No): " << endl;
    cin >> isMarried;

    int yearlySalary = monthlySalary * 12;

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