#include <iostream>
using namespace std;

// This program will print id card using arrays, structures, and functions.


struct strInfo{
    string firstName;
    string lastName;
    short age;
    string phoneNumber;
};

void readInfo(strInfo &info){
    cout << "Please enter your First Name: " << endl;
    cin >> info.firstName;

    cout << "Please enter your Last Name: " << endl;
    cin >> info.lastName;

    cout << "Please enter your Age: " << endl;
    cin >> info.age;

    cout << "Please enter your Phone Number: " << endl;
    cin >> info.phoneNumber;
}

void printInfo(strInfo info){
    cout << "*****************************\n";
    cout << "First Name: " << info.firstName << endl;
    cout << "Last Name: "<< info.lastName << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone Number: " << info.phoneNumber << endl;
    cout << "*****************************\n";
}

void readPersonsInfo(strInfo persons[2]){
    readInfo(persons[0]);
    cout << "\n\n";
    readInfo(persons[1]);
}

void printPersonsInfo(strInfo persons[2]){
    cout << "\n\n";
    printInfo(persons[0]);
    cout << "\n";
    printInfo(persons[1]);
}


int main(){
    strInfo persons[2];

    readPersonsInfo(persons);
    printPersonsInfo(persons);

    return 0;
}
