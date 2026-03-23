#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C training
 * Description: Program reverses a string in place
 */

void rev_string(char *s)
{
    int i, j;
    char temp;

    i = 0;
    j = 0;

    /* Find the end of the string */
    while (s[j] != '\0')
    {
        j++;
    }
    /* Move j back to the laast actual character */
    j--;

    /* swap characte from outside in until they meet in the middle */
    while (i < j)
    {
        temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	i++;
	j--;
    }
}

