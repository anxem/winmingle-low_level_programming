#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the last digit of a number and returns it
 */

int print_last_digit(int n)
{
    int last_digit;

    /* Get last digit using modulo */
    last_digit = n % 10;

    /* If negative, make it positive */
    if (last_digit < 0)
        last_digit = -last_digit;

    /* Print the digit */
    _putchar(last_digit + '0');

    return (last_digit);
}

