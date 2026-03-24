#include "main.h"
#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Program that Prints n elements of an array of integers.
 */

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);

	/* only print comma and space if its Not the last element */
	if (i < n - 1)
	{
	    printf(", ");
	}
    }
    printf("\n");
}

