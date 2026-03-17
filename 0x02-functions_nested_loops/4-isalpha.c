#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Checks if a character is an alphabetic letter
 */

int _isalpha(int c)
{
    /* Check lowercase (a-z) OR uppercase (A-Z) */
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);

    return (0);
}

