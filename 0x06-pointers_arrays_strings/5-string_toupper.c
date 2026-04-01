#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Function that changes all lowercase of a string to uppercase.
 */

char *string_toupper(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
	{
	    str[i] = str[i] - 32;
	}
	i++;
    }
    return (str);
}

