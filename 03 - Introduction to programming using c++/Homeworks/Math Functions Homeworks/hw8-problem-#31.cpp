#include <iostream>
#include <cmath>
using namespace std;

// This program will ask the user to enter a number and then calculate the following powers to that number : 2, 3, 4, then use round function from cmath library and print it.

int main(){
    int num;

    cout << "Please enter then number" << endl;
    cin >> num;

    cout << num << " ^ 2 = " << round(pow(num,2)) << endl;
    cout << num << " ^ 3 = " << round(pow(num,3)) << endl;
    cout << num << " ^ 4 = " << round(pow(num,4)) << endl;

    return 0;
}