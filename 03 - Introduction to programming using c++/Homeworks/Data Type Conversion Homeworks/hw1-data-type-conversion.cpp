#include <iostream>
#include <string>
using namespace std;

/* This program will convert : 
- 1) string to double, float, and int
- 2) int to string
- 3) double to string
- 4) float to string and int */

int main(){
    // 1)
    string st1 = "43.22";
    
    double stringToDouble = stod(st1);
    float stringToFloat = stof(st1);
    int stringToInt = stoi(st1);

    cout << "String to Double: " << stringToDouble << endl;
    cout << "String to Float: " << stringToFloat << endl;
    cout << "String to Int: " << stringToInt << endl;

    // 2)
    int n1 = 20;
    string intToString = to_string(n1);

    cout << "Int to String: " << intToString << endl;

    // 3)
    double n2 = 33.5;
    string doubleToString = to_string(n2);

    cout << "Double to String: " << doubleToString << endl;

    // 4)
    float n3 = 55.23;
    string floatToString = to_string(n3);
    int floatToInt = (int)n3;

    cout << "Float to String: " << floatToString << endl;
    cout << "Float to Int: " << floatToInt << endl;

    

}