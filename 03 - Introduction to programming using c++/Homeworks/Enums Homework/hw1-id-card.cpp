#include <iostream>
using namespace std;

// This program will print id card.
enum Gender {Male, Female};
enum MarriedStatus {Married, NotMarried};
enum FavoriteColor {White, Black, Red};

int main(){

    string name = "Enad Alharbi";
    int age = 21;
    string city = "Makkah";
    string country = "Saudi Arabia";
    int monthlySalary = 990;
    int yearlySalary = monthlySalary * 12;
    Gender gender = Gender::Male;
    MarriedStatus marriedStatus = MarriedStatus::NotMarried;
    FavoriteColor favoriteColor = FavoriteColor::Red;

    cout << "******************************************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthlySalary << endl;
    cout << "Yearly Salary: " << yearlySalary << endl;
    cout << "Gender: " << gender << endl;
    cout << "Is Married?: " << marriedStatus << endl;
    cout << "Favorite Color: " << favoriteColor << endl;
    cout << "******************************************\n";

    return 0;
}
