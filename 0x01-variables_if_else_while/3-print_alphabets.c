#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Traing
 * Description: Prints lowercase alphabet then uppercase alphabet
 */

int main(void)
{
    char letter;

    /* Print lowercase alphabet */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    /* Print uppercase alphabet */
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}
