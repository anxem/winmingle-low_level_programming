#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints every minute of the day from 00:00 to 23:59
 */


void jack_bauer(void)
{
    int hour, minute;

    /* Loop through hours (0 - 23) */
    for (hour = 0; hour < 24; hour++)
    {
        /* Loop through minutes (0 - 59) */
        for (minute = 0; minute < 60; minute++)
        {
            /* Print hour (two digits) */
            _putchar((hour / 10) + '0');
            _putchar((hour % 10) + '0');

            /* Print colon */
            _putchar(':');

            /* Print minute (two digits) */
            _putchar((minute / 10) + '0');
            _putchar((minute % 10) + '0');

            /* New line */
            _putchar('\n');
        }
    }
}

