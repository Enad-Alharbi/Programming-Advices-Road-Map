#include <iostream>
using namespace std;

/* This program will ask the user to enter the task duaration in : days, hours, minutes and seconds
and then calculate the task duration in seconds and print it on the screen */

int main(){
    int secondsPerDay = 24*60*60;
    int secondsPerHour = 60*60;
    int secondsPerMinute = 60;

    short days;
    short hours;
    short minutes;
    short seconds;

    cout << "Please enter the number of days: " << endl;
    cin >> days;

    cout << "Please enter the number of hours: " << endl;
    cin >> hours;

    cout << "Please enter the number of minutes: " << endl;
    cin >> minutes;

    cout << "Please enter the number of seconds: " << endl;
    cin >> seconds;

    int totalTaskDurationInSeconds = (days * secondsPerDay) + (hours * secondsPerHour) + (minutes * secondsPerMinute) + seconds;
    
    cout << "The total task duration in seconds is: " << totalTaskDurationInSeconds << endl;

    return 0;
}