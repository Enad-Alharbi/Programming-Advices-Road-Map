#include <iostream>
using namespace std;

void mySumProcedure(){
    int num1;
    int num2;

    cout << "Please enter Number1: " << endl;
    cin >> num1;

    cout << "Please enter Number2: " << endl;
    cin >> num2;

    cout << "**************************\n";
    cout << num1 + num2 << endl;;
}

int mySumFunction(){
    int num1;
    int num2;

    cout << "Please enter Number1: " << endl;
    cin >> num1;

    cout << "Please enter Number2: " << endl;
    cin >> num2;

    cout << "**************************\n";
    return num1 + num2;
}

int main(){
    cout << "mySumProcedure: " << endl;
    mySumProcedure();

    cout << "\n \n mySumFunction: " << endl;
    cout << mySumFunction() << endl;

    return 0;
}

