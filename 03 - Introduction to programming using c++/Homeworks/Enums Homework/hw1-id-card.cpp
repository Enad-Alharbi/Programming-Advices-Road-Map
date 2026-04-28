#include <iostream>
using namespace std;

// This program will print id card.

enum enGender {Male, Female};
enum enMaritalStatus {Married, NotMarried};
enum enFavoriteColor {White, Black, Red};

struct stAddress{
    string country;
    string city;
    string street;
    string postalCode;
};

struct stContactInfo{
    string email;
    string phoneNumber;
    stAddress address;
};

struct stPerson{
    string firstName;
    string lastName;
    short age;
    int monthlySalary;
    int yearlySalary;
    enGender gender;
    enMaritalStatus maritalStatus;
    enFavoriteColor favoriteColor;
    stContactInfo contactInfo;
};

int main(){

    stPerson Person1;

    Person1.firstName = "Enad";
    Person1.lastName = "Alharbi";
    Person1.age = 21;
    Person1.monthlySalary = 1000;
    Person1.yearlySalary = Person1.monthlySalary * 12;

    Person1.gender = enGender::Male;
    Person1.maritalStatus = enMaritalStatus::NotMarried;
    Person1.favoriteColor = enFavoriteColor::Red;

    Person1.contactInfo.email = "enadalharbi@example.com";
    Person1.contactInfo.phoneNumber = "+966500000000";

    Person1.contactInfo.address.country = "Saudi Arabia";
    Person1.contactInfo.address.city = "Makkah";
    Person1.contactInfo.address.street = "Al-Zahir St.";
    Person1.contactInfo.address.postalCode = "24211";


    cout << "******************************************\n";
    cout << "Full Name: " << Person1.firstName << " " << Person1.lastName << endl;
    cout << "Age: " << Person1.age << endl;
    cout << "Country: " << Person1.contactInfo.address.country << endl;
    cout << "City: " << Person1.contactInfo.address.city << endl;
    cout << "Street: " << Person1.contactInfo.address.street << endl;
    cout << "Postal Code: " << Person1.contactInfo.address.postalCode << endl;
    cout << "Monthly Salary: " << Person1.monthlySalary << endl;
    cout << "Yearly Salary: " << Person1.yearlySalary << endl;
    cout << "Gender: " << Person1.gender << endl;
    cout << "Marital Status: " << Person1.maritalStatus << endl;
    cout << "Favorite Color: " << Person1.favoriteColor << endl;
    cout << "Email: " << Person1.contactInfo.email << endl;
    cout << "Phone Number: " << Person1.contactInfo.phoneNumber << endl;
    cout << "******************************************\n";

    return 0;
}