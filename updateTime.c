#include <stdio.h>

struct time {
    int seconds;
    int minutes;
    int hours;
};

int main (void) {
    struct time updateTime (struct time now);
    struct time currentTime, nextTime;

    printf("Enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &currentTime.hours, &currentTime.minutes, &currentTime.seconds);

    nextTime = updateTime(currentTime);

    printf("Updated time is %.2i:%.2i:%.2i\n", nextTime.hours, nextTime.minutes, nextTime.seconds);

    return 0;
}

struct time updateTime ( struct time now ) {
    // increment time by 1 second
    ++now.seconds;

    if (now.seconds == 60) {
        now.seconds = 0;
        ++now.minutes;
    
        if (now.minutes == 60) {
            now.minutes = 0;
            ++now.hours;

            if (now.hours == 24) {
                now.hours = 0;
            }
        }
    }

    return now;
}
