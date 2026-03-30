#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Function that reverses the contents of an array of integers.
 */

void reverse_array(int *a, int n)
{
    int i;
    int temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i]; /* store the current element in a temporary variable */

	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
    }
}

