#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints all single-digit numbers of base 10 starting from 0
 */

int main(void)
{
    int number;

    /* loop from 0 to 9 */
    for (number = 0; number <= 9; number++)
    {
        /* convert number to character and print */
	putchar('0' + number);
    }

    putchar('\n');

    return 0;
}
