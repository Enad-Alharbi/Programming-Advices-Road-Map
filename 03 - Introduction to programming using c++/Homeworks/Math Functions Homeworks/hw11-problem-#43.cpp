#include <iostream>
#include <cmath>
using namespace std;

/* This program will ask the user to enter number of seconds and then changes it to days:hours:minutes:seconds
then use round function from cmath library and print it. */ 

int main(){
    int secondsPerDay = 24*60*60;
    int secondsPerHour = 60*60;
    int secondsPerMinute = 60;

    int days;
    int hours;
    int minutes;
    int seconds;
    int remainder;

    int totalSeconds;
    cout << "Please enter the total seconds: " << endl;
    cin >> totalSeconds;

    days = totalSeconds / secondsPerDay;
    remainder = totalSeconds % secondsPerDay;

    hours = remainder / secondsPerHour;
    remainder = remainder % secondsPerHour;

    minutes = remainder / secondsPerMinute;
    remainder = remainder % secondsPerMinute;

    seconds = remainder;

    cout << round(days) << ":" << round(hours) << ":" << round(minutes) << ":" << round(seconds) << endl;

    return 0;
}