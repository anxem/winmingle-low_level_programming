#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Checks if a character is lowercase
 */

int _islower(int c)
{
    /* ASCII range for lowercase letters: a (97) to z (122) */
    if (c >= 'a' && c <= 'z')
        return (1);

    return (0);
}

