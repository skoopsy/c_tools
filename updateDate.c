#include <stdio.h>
//#include <stdbool.h>

struct date {
    int year;
    int month;
    int day;
};

// Calculate tomorrows date
struct date dateUpdate(struct date today) {
    struct date tomorrow;
    int numberOfDays (struct date d);

    if (today.day != numberOfDays (today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}

// find number of days in the month
int numberOfDays (stuct date d) {
    int days;
    int isLeapYear (struct date d);

    const int datsPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( isLeapYear && d.month == 2) {
        days = 29;
    }

    else {
        days = daysPerMonth[d.month -1];
    }

    return days;
}

// determin if leapyear

int isLeapYear (struct date d) {
    int leapYearFlag;

    if ( (d.year % 4 == 0 && d.year % 100 != 0 ) || d.year % 400 == 0 ) {
        leapYearFlag = 1; // its a leap year
    }
    else {
        leapYearFlag = 0;
    }

    return leapYearFlag;
}

int main (void) {
    struct date dateUpdate (struct date today);
    struct date thisDay, nextDay;

    printf ("Enter todays date (yyyy mm dd): ");
    scanf ("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);

    printf("Tomorrows date is %i/%i/%.2i. \n", nextDay.year % 100, nextDay.month, nextDay.day);

    return 0;
}

