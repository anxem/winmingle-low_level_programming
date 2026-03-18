#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the day of the year and remaining days
 */

void print_remaining_days(int month, int day, int year)
{
    /* check for leap year */
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        /* if after February, add 1 day */
        if (month > 2)
            day++;

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        /* invalid Feb 29 in non-leap year */
        if (month == 2 && day == 60)
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

