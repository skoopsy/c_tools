#include <stdio.h>

int main (void) {
    struct date {
        int day;
        int month;
        int year;
    };

    struct date today, *pDate;

    pDate = &today;

    pDate->day = 9;
    pDate->month = 11;
    pDate->year = 2077;

    printf ("Today's date is %i/%i/%.2i.\n",
            pDate->year,
            pDate->month,
            pDate->day
           );

    return 0;
}
