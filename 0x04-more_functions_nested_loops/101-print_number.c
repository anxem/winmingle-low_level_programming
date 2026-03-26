#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints an integer using only _putchar
 */

void print_number(int n)
{
    unsigned int sign;

    if (n < 0)
    {
        _putchar('-');
	/* Use unsigned int to handle INT_MIN overflow safely */
	sign = -n;
    }
    else
    {
        sign = n;
    }

    /* recursively remove last digit until we reach the first digit */
    if (sign / 10)
    {
        print_number(sign / 10);
    }

    /* print the last digit (modulo 10) */
    _putchar((sign % 10) + '0');
}

