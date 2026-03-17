#include "main.h"
#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet followed by a new line
 */

void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }

    _putchar('\n');
}
