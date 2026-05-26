#include <iostream>
using namespace std;

// This program will use 2 Global & Local Variables (x and y), print them and update them.

int x = 100;
int y = 500;

void myFunction(){
    int x, y;

    x = 200;
    y = 600;

    cout << "Local variables x and y of myFunction function: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

int main (){
    int x, y;
    
    x = 300;
    y = 700;

    cout << "Local variables x and y of main function: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    myFunction();

    cout << "global variables x and y: " << endl;
    cout << "x = " << ::x << endl;
    cout << "y = " << ::y << endl;

    cout << "global variables x and y + 1000: " << endl;
    cout << "x = " << ::x + 1000 << endl;
    cout << "y = " << ::y + 1000 << endl;

}