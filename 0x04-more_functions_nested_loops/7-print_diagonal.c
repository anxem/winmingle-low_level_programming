#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Draws a diagonal line on the terminal
 */

void print_diagonal(int n)
{
    int i, j;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
	{
	    for (j = 0; j < i; j++)
	    {
	        _putchar(' ');
	    }
	    _putchar('\\');
	    _putchar('\n');
	}
    }
    else
    {
        _putchar('\n');
    }
}

