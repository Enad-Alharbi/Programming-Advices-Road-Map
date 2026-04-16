#include <iostream>
#include <cmath>
using namespace std;

/* This program will ask the user to enter the task duaration in : days, hours, minutes and seconds
and then calculate the task duration in seconds, then use round function from cmath library and print it on the screen */

int main(){
    int secondsPerDay = 24*60*60;
    int secondsPerHour = 60*60;
    int secondsPerMinute = 60;

    int days;
    int hours;
    int minutes;
    int seconds;

    cout << "Please enter number of days: " << endl;
    cin >> days;

    cout << "Please enter number of hours: " << endl;
    cin >> hours;
    
    cout << "Please enter number of minutes: " << endl;
    cin >> minutes;

    cout << "Please enter number of secodns: " << endl;
    cin >> seconds;

    int taskDurationInSeconds = (days * secondsPerDay) + (hours * secondsPerHour) + (minutes * secondsPerMinute) + seconds;

    cout << "The task duration in seconds is: " << round(taskDurationInSeconds) << endl;

    return 0;
}