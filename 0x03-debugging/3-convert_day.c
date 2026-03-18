#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Converts date to day of year
 */

int convert_day(int month, int day)
{
    int i;
    int days_in_month[] = {31, 28, 31, 30, 31, 30,
                           31, 31, 30, 31, 30, 31};

    for (i = 0; i < month - 1; i++)
        day += days_in_month[i];

    return (day);
}

