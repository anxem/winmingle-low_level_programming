#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Check for a digit for 0 through 9.
 */

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
	    return(1);
    else
	    return(0);
}

