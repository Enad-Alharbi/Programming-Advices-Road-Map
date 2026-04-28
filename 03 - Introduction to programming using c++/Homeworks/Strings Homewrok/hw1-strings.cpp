#include <iostream>
#include <string>
using namespace std;

/* This program will ask the user to enter 3 strings and then print the following : 
- 1) Length of string1
- 2) Characters at 0,2,4,7 of string1
- 3) Concatenation of string2 and string3 
- 4) stoi(string2) * stoi(string3) */

int main(){
    string str1;
    string str2;
    string str3;

    cout << "Please enter String1: " << endl;
    getline(cin, str1);

    cout << "Please enter String2 (number): " << endl;
    cin >> str2;
    
    cout << "Please enter String3 (number): " << endl;
    cin >> str3;

    cout << "*********************************************" << endl;
    // 1)
    cout << "The length of String1 is: " << str1.length() << endl;
    
    // 2)
    cout << "Characters at 0, 2, 4, 7 are: " << str1[0] << " " << str1[2] << " " << str1[4] << " " << str1[7] << endl;

    // 3) 
    cout << "Concatenating String2 and String3 = " << str2 + str3 << endl;

    // 4)
    int result = stoi(str2) * stoi(str3);
    cout << str2 << " * " << str3 << " = " << result << endl;

}