#include <stdio.h>
/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints all combinations of two two-digit numbers
 */

int main(void)
{
    int first;
    int second;

    for (first = 0; first <= 98; first++)
    {
        for (second = first + 1; second <= 99; second++)
        {
            /* Print first number (2 digits) */
            putchar('0' + first / 10);
            putchar('0' + first % 10);

            putchar(' ');

            /* Print second number (2 digits) */
            putchar('0' + second / 10);
            putchar('0' + second % 10);

            /* Print comma and space except after last combination */
            if (first != 98 || second != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
