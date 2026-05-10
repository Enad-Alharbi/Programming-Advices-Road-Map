#include <iostream>
#include <cmath>
using namespace std;

// This program will ask the user to enter the number of seconds and then it will devide it to days:hours:minutes:seconds.

void convertSecondsToDaysHoursMinutesAndSeconds(int totalSeconds){
    int daysInSeconds = 24 * 60 * 60;
    int hoursInSeconds = 60 * 60;
    int minutesInSeconds = 60;
    int reminder;

    int days = totalSeconds / daysInSeconds;
    reminder = totalSeconds % daysInSeconds;

    int hours = reminder / hoursInSeconds;
    reminder %= hoursInSeconds;

    int minutes = reminder / minutesInSeconds;
    reminder %= minutesInSeconds;

    int seconds = reminder;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds;
}

int main(){
    int totalSeconds;

    cout << "Please enter the total seconds you want to convert to days:hours:minutes:seconds : " << endl;
    cin >> totalSeconds;
    
    convertSecondsToDaysHoursMinutesAndSeconds(totalSeconds);

    return 0;
}