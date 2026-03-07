#include <iostream> 
using namespace std;

// This program will ask user for their age and then print it on the screen after 5 years.

int main(){ 
    int age;

    cout << "This program will give you your age after 5 years!\n";
    cout << "Please enter your age: " << endl;
    cin >> age;

    cout << "After 5 years you will be " << age + 5 << " years old!";

    return 0;
}