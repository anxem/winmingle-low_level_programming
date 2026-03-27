#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Concatenates two strings using at most n bytes from src.
 */

char *_strncat(char *dest, char *src, int n)
{
    int dest_len, i;

    dest_len = 0;

    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append src to dest, stopping at n bytes or src's end */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return (dest);
}

