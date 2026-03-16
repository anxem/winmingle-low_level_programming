#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet followed by a new line
 */


int main(void)
{
    char letter;

    /* loop through letters a to z */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    /* Print new line */
    putchar('\n');

    return 0;
}
