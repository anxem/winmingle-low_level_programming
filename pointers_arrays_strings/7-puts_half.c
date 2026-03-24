#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Program that prints the second half of a string.
 */

void puts_half(char *str)
{
    int len, i, start;

    len = 0;

    /* find the total lenght of the string */
    while (str[len] != '\0')
    {
        len++;
    }
    if (len % 2 == 0) 
    {
        start = len / 2;
    }
    else 
    {
        start = (len + 1) / 2;
    }

    for (i = start; i < len; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}

