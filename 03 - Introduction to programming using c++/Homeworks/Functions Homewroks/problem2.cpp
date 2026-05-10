#include <iostream>
using namespace std;

// This program will use function parameters to print username.

void printName(string name){
    cout << name << endl;
}

int main(){
    string name;
    cout << "Please enter your name: " << endl;
    getline(cin, name);

    cout << "Your name is: ";
    printName(name);
    cout << "\n";

    return 0;
}