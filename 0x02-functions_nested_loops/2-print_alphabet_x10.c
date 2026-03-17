#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
    int count;
    char letter;

    /* Repeat 10 times */
    for (count = 0; count < 10; count++)
    {
        /* Print a to z */
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }

        /* New line after each alphabet */
        _putchar('\n');
    }
}

