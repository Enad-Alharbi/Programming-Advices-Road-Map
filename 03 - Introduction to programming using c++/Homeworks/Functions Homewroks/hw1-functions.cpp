#include <iostream>
using namespace std;

void printIdCard(){
    cout << "************************************" << endl;
    cout << "Name: Enad Alharbi" << endl;
    cout << "Age: 21" << endl;
    cout <<  "City: Makkah" << endl;
    cout << "Country: Saudi Arabia" << endl;
    cout << "************************************" << endl;
}

void printSquareOfStars(){
    cout << "********" << endl;
    cout << "********" << endl;
    cout << "********" << endl;
    cout << "********" << endl;
}

void printILoveProgramming(){
    cout << "I Love Programming!" << endl;
    cout << "I promise to be the best developer ever!" << endl;
    cout << "I know it will take some time to practice, but I will achieve my goal." << endl;
    cout << "Best Regards," << endl;
    cout << "Enad Alharbi" << endl;
}

void printLetterH(){
    cout << "*      *" << endl;
    cout << "*      *" << endl;
    cout << "********" << endl;
    cout << "*      *" << endl;
    cout << "*      *" << endl;
}

int main(){
    printIdCard();
    cout << "\n";
    printSquareOfStars();
    cout << "\n";
    printILoveProgramming();
    cout << "\n";
    printLetterH();

    return 0;
}