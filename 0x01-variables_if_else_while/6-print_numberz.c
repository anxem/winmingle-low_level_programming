#include <stdio.h>
/**
 * Author: Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints all single-digit numbers of base 10 starting from 0
 *              without using char variables
 */

int main(void)
{
    int number;

    /* Loop from 0 to 9 */
    for (number = 0; number <= 9; number++)
    {
        putchar('0' + number);
    }

    /* Print new line */
    putchar('\n');

    return 0;
}
