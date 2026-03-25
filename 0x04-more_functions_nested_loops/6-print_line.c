#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Draws a straight line in the terminal
 */

void print_line(int n)
{
    int i;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
	{
	    _putchar('_');
	}
    }
    _putchar('\n');
}

