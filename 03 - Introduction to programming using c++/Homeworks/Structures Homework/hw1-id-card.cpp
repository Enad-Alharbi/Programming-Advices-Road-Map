#include <iostream>
using namespace std;

// This program will ask the user for information and the print it.

struct Address{
    string country;
    string city;
    string street;
    string postalCode;
};

struct ContactInfo{
    string email;
    string phoneNumber;
};

struct IdCard{
    string name;
    int age;
    Address address;
    int monthlySalary;
    char gender;
    bool isMarried;
    ContactInfo contactInfo;
};

int main(){

    IdCard idCard;

    cout << "Please enter your name: " << endl;
    cin >> idCard.name;

    cout << "Please enter your age: " << endl;
    cin >> idCard.age;

    cout << "Please enter your country: " << endl;
    cin >> idCard.address.country;

    cout << "Please enter your city: " << endl;
    cin >> idCard.address.city;

    cout << "Please enter your street: " << endl;
    cin >> idCard.address.street;

    cout << "Please enter your postal code: " << endl;
    cin >> idCard.address.postalCode;

    cout << "Please enter your monthly salary: " << endl;
    cin >> idCard.monthlySalary;

    cout << "Please enter your gender (M for Male and F for Female): " << endl;
    cin >> idCard.gender;

    cout << "Please enter if you are married (1 for Yes and 0 for No): " << endl;
    cin >> idCard.isMarried;

    cout << "Please enter your email: " << endl;
    cin >> idCard.contactInfo.email;

    cout << "Please enter your phone number: " << endl;
    cin >> idCard.contactInfo.phoneNumber;

    int yearlySalary = idCard.monthlySalary * 12;

    cout << "******************************************\n";
    cout << "Name: " << idCard.name << endl;
    cout << "Age: " << idCard.age << endl;
    cout << "Country: " << idCard.address.country << endl;
    cout << "City: " << idCard.address.city << endl;
    cout << "Street: " << idCard.address.street << endl;
    cout << "Postal Code: " << idCard.address.postalCode << endl;
    cout << "Monthly Salary: " << idCard.monthlySalary << endl;
    cout << "Yearly Salary: " << yearlySalary << endl;
    cout << "Gender: " << idCard.gender << endl;
    cout << "Is Married?: " << idCard.isMarried << endl;
    cout << "Email: " << idCard.contactInfo.email << endl;
    cout << "Phone Number: " << idCard.contactInfo.phoneNumber << endl;
    cout << "******************************************\n";

    return 0;
}