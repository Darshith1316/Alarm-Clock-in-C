#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int hours, minutes;

    printf("Enter the alarm time (24-hour format):\n");
    printf("Hours (0-23): ");
    scanf("%d", &hours);

    printf("Minutes (0-59): ");
    scanf("%d", &minutes);

    setAlarm(hours, minutes);

    return 0;
}

void setAlarm(int hours, int minutes) 
{
    time_t now;
    struct tm *alarmTime;

    // Get current time
    time(&now);
    alarmTime = localtime(&now);

    // Set alarm time
    alarmTime->tm_hour = hours;
    alarmTime->tm_min = minutes;
    alarmTime->tm_sec = 0;

    // Check if alarm time is in the past, if so, set it for the next day
    if (difftime(mktime(alarmTime), now) < 0) {
        alarmTime->tm_mday += 1;
    }

    printf("Alarm set for %02d:%02d\n", hours, minutes);

    // Sleep until the alarm time
    sleep(difftime(mktime(alarmTime), now));
       //Plays .exe with song in it
       int main();
       {
        system("add path to the .exe file here");
       }

}

