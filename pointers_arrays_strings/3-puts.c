#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: A program that print a string followed by a new line to stdout.
 */

void _puts(char *str)
{
    int i = 0;
    while (str[i])
    {
        _putchar(str[i]);
	i++;
    }
    _putchar('\n');
}

