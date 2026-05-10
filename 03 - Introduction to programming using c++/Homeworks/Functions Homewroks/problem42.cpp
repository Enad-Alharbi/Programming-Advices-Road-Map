#include <iostream>
#include <cmath>
using namespace std;

// This program wiil ask the user to enter the task duration in days, hours, minutes, and seconds and then convert it to seconds.

int calculateTotalSeconds(int days, int hours, int minutes, int seconds){
    int daysInSeconds = 24 * 60 * 60;
    int hoursInSeconds = 60 * 60;
    int minutesInSeconds = 60;
    
    int totalSeconds = (days * daysInSeconds) + (hours * hoursInSeconds) + (minutes * minutesInSeconds) + (seconds * 1);

    return totalSeconds;
}

int main(){
    int days, hours, minutes, seconds;

    cout << "Please enter Days: " << endl;
    cin >> days;

    cout << "Please enter Hours: " << endl;
    cin >> hours;

    cout << "Please enter Minutes: " << endl;
    cin >> minutes;

    cout << "Please enter Seconds: " << endl;
    cin >> seconds;

    cout << "Total Seconds = " << calculateTotalSeconds(days, hours, minutes, seconds) << endl;

    return 0;
}