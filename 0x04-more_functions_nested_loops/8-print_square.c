#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints a square using the # character.
 */

void print_square(int size)
{
    int row, col;

    if (size > 0)
    {
        for (row = 0; row < size; row++)
	{
	    for (col = 0; col < size; col++)
	    {
	        _putchar('#');
	    }
	    _putchar('\n');
	}
    }
    else
    {
        _putchar('\n');
    }
}

