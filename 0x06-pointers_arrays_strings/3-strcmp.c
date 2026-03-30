#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Compares two strings.
 */

int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
	{
	    return (s1[i] - s2[i]);
	}
	i++;
    }
    /* If the loops ends, return the difference of the final characters */
    /* This handles cases where one string is a prefix of the other */
    return (s1[i] - s2[i]);
}

