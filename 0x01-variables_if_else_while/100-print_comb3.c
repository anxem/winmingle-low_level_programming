#include <stdio.h>
/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints all possible combinations of two different digits
 */

int main(void)
{
    int first;
    int second;

    /* Loop for the first digit */
    for (first = 0; first <= 8; first++)
    {
        /* Loop for the second digit */
        for (second = first + 1; second <= 9; second++)
        {
            putchar('0' + first);
            putchar('0' + second);

            /* Avoid printing comma after last combination */
            if (first != 8 || second != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
