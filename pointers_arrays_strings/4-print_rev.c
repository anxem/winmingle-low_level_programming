#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: winmingle Community C Training
 * Description: Progam that print a string in reverse, followed by a new line
 */

void print_rev(char *s)
{
    int index = 0;
    while (s[index])
    {
        index++;
    }
    /* move back one step to the last actual character */
    index--;

    while (index >= 0)
    {
        _putchar(s[index]);
	index--;
    }

    _putchar('\n');
}

