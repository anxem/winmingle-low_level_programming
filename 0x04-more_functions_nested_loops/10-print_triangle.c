#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints a triangle, followed by a new line.
 */


void print_triangle(int size)
{
    int row, column;

    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (row = 1; row <= size; row++)
	{
	    for (column = 0; column < (size - row); column++)
	    {
	        _putchar(' ');
	    }
	    for (column = 0; column < row; column++)
	    {
	        _putchar('#');
	    }
	    _putchar('\n');
	}
    }
}

