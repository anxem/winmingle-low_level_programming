#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Program that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
    int i, j;

    i = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
	i++;
	j++;
    }
    /* Add the final null terminator to the new end of dest */
    dest[i] = '\0';

    return (dest);
}

