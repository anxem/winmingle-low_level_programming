#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Program that prints every other character of a string,
 *              starting with the first character, followed by a new line.
 */

void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
	i++;

	if (str[i] != '\0')
	{
	    i++;
	}
    }
    _putchar('\n');
}

