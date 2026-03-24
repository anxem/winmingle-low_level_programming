#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Program that Copies a string from src to dest.
 */

char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
	i++;
    }
    dest[i] = '\0';

    return (dest);
}

