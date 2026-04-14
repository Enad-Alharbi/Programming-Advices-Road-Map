#include <iostream> 
using namespace std;

// This program will ask the user to enter 3 marks (numbers), and them calculate the average and print it.

int main(){
    int mark1;
    int mark2;
    int mark3;

    cout << "Please enter your first mark: " << endl;
    cin >> mark1;

    cout << "Please enter your second mark: " << endl;
    cin >> mark2;

    cout << "Please enter your thuird mark: " << endl;
    cin >> mark3;

    int avg = (mark1 + mark2 + mark3)/3;

    cout << "Your average mark is: " << avg << endl;

    return 0;

}