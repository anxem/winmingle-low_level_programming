#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Program that converts a string to an integer.
 */

int _atoi(char *s)
{
    int i, sign, res, found;

    i = 0;
    sign = 1;
    res = 0;
    found = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
	{
	    sign *= -1;
	}

	if (s[i] >= '0' && s[i] <= '9')
	{
	    found = 1;
	    if (sign == 1)
	    {
	        res = res * 10 + (s[i] - '0');
	    }
	    else
	    {
	        res = res * 10 - (s[i] - '0');
	    }
	    /* stop once we hit a non-digit After finding a number */
	    if (s[i + 1] < '0' || s[i + 1] > '9')
	    {
	        break;
	    }
	}
	i++;
    }
    if (found == 0)
	    return (0);
    return (res);
}

