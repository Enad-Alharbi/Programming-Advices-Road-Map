#include <iostream>
using namespace std;

// This program will ask the user to enter his information and the print it.

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

void readInfo(IdCard &info){
    cout << "Please enter your name: " << endl;
    getline(cin, info.name);

    cout << "Please enter your age: " << endl;
    cin >> info.age;

    cout << "Please enter your country: " << endl;
    cin >> info.address.country;

    cout << "Please enter your city: " << endl;
    cin >> info.address.city;

    cout << "Please enter your street: " << endl;
    cin >> info.address.street;

    cout << "Please enter your postal code: " << endl;
    cin >> info.address.postalCode;

    cout << "Please enter your monthly salary: " << endl;
    cin >> info.monthlySalary;

    cout << "Please enter your gender (M for male, and F for female): " << endl;
    cin >> info.gender;

    cout << "Please enter your marital status (1 for Married, and 0 for Not Married): " << endl;
    cin >> info.isMarried;

    cout << "Please enter your email: " << endl;
    cin >> info.contactInfo.email;

    cout << "Please enter your phone number: " << endl;
    cin >> info.contactInfo.phoneNumber;
}

void printInfo(IdCard info){
    int yearlySalary = info.monthlySalary * 12;

    cout << "******************************************\n";
    cout << "Name: " << info.name << endl;
    cout << "Age: " << info.age << endl;
    cout << "Country: " << info.address.country << endl;
    cout << "City: " << info.address.city << endl;
    cout << "Street: " << info.address.street << endl;
    cout << "Postal Code: " << info.address.postalCode << endl;
    cout << "Monthly Salary: " << info.monthlySalary << endl;
    cout << "Yearly Salary: " << yearlySalary << endl;
    cout << "Gender: " << info.gender << endl;
    cout << "Is Married?: " << info.isMarried << endl;
    cout << "Email: " << info.contactInfo.email << endl;
    cout << "Phone Number: " << info.contactInfo.phoneNumber << endl;
    cout << "******************************************\n";
}

int main(){
    IdCard person1;
    readInfo(person1);
    printInfo(person1);
}

