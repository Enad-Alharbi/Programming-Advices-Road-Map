#include <iostream>
using namespace std;

// This program will calculate a triangle area and print it on the screen.

int main(){
    int a;
    int h;

    cout << "Please enter a:" << endl;
    cin >> a;

    cout << "Please enter h:" << endl;
    cin >> h;

    int triangleArea = (a/2) * h;

    cout << "The Triangle is : " << triangleArea << endl;

    return 0;
}
