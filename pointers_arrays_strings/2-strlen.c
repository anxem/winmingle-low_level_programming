#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C training
 * Description: Program that returns the length of a string
 */

int _strlen(char *s)
{
    int index = 0;

    while (s[index])
    {
        index++;
    }
    return (index);
}

