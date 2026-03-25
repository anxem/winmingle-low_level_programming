#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Checks for uppercase character.
 */


int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
	    return (1);
    else
	    return (0);
}

