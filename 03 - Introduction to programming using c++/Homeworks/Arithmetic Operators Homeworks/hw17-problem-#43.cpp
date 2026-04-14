#include <iostream>
using namespace std;

// This program will ask the user to enter number of seconds and then changes it to days:hours:minutes:seconds and print it.

int main(){
    int totalSeconds;
    
    int remainder;
    int numberOfDays;
    int numberOfHours;
    int numberOfMinutes;
    int numberOfSeconds;

    int secondsPerDay = 24*60*60;
    int secondsPerHour = 60*60;
    int secondsPerMinute = 60;

    cout << "Please enter the total seconds: " << endl;
    cin >> totalSeconds;

    numberOfDays = totalSeconds/secondsPerDay;

    remainder = totalSeconds % secondsPerDay;

    numberOfHours = remainder/secondsPerHour;

    remainder = remainder % secondsPerHour;

    numberOfMinutes = remainder/secondsPerMinute;

    remainder = remainder % secondsPerMinute;

    numberOfSeconds = remainder;

    cout << numberOfDays << ":" << numberOfHours << ":" << numberOfMinutes << ":" << numberOfSeconds; 

}