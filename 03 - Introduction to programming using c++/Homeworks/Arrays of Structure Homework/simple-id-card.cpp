#include <iostream>
using namespace std;

// This program will print id card using arrays, structures, and functions.
// ** THIS IS MY SOLUTION **

struct strIdCard{
    string firstName;
    string lastName;
    short age;
    string phoneNumber;
};

void readPerson(strIdCard persons[2], short personNumber){
    cout << "Please enter your First Name: " << endl;
    cin >> persons[personNumber].firstName;

    cout << "Please enter your Last Name: " << endl;
    cin >> persons[personNumber].lastName;

    cout << "Please enter your Age: " << endl;
    cin >> persons[personNumber].age;

    cout << "Please enter your Phone Number: " << endl;
    cin >> persons[personNumber].phoneNumber;
}

void printPerson(strIdCard persons[2], short personNumber){
    cout << "*****************************\n";
    cout << "First Name: " << persons[personNumber].firstName << endl;
    cout << "Last Name: "<< persons[personNumber].lastName << endl;
    cout << "Age: " << persons[personNumber].age << endl;
    cout << "Phone Number: " << persons[personNumber].phoneNumber << endl;
    cout << "*****************************\n";
}

void printAllPersons(strIdCard persons[2]){
    printPerson(persons, 0);
    printPerson(persons, 1);
}

int main(){
    strIdCard persons[2];

    readPerson(persons, 0);

    cout << "\n\n";

    readPerson(persons, 1);

    printAllPersons(persons);

    return 0;
}