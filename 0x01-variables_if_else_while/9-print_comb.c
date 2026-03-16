#include <stdio.h>
/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints all possible combinations of single-digit numbers
 *              separated by comma and space
 */

int main(void)
{
    int number;

    /* Loop through numbers 0 to 9 */
    for (number = 0; number <= 9; number++)
    {
        putchar('0' + number);

        /* Print comma and space except after the last number */
        if (number != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    /* Print new line */
    putchar('\n');

    return 0;
}
