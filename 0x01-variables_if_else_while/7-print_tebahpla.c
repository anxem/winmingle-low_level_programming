#include <stdio.h>
/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet in reverse order
 */

int main(void)
{
    char letter;

    /* Loop from 'z' down to 'a' */
    for (letter = 'z'; letter >= 'a'; letter--)
    {
        putchar(letter);
    }

    /* Print new line */
    putchar('\n');

    return 0;
}
