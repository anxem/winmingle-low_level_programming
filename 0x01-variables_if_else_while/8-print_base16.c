#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints all numbers of base 16 in lowercase
 */

int main(void)
{
    int number;
    char letter;

    /* Print digits 0 to 9 */
    for (number = 0; number <= 9; number++)
    {
        putchar('0' + number);
    }

    /* Print letters a to f */
    for (letter = 'a'; letter <= 'f'; letter++)
    {
        putchar(letter);
    }

    /* Print new line */
    putchar('\n');

    return 0;
}
