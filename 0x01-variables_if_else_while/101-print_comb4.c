#include <stdio.h>
/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints all possible combinations of three different digits
 */

int main(void)
{
    int first;
    int second;
    int third;

    /* First digit */
    for (first = 0; first <= 7; first++)
    {
        /* Second digit */
        for (second = first + 1; second <= 8; second++)
        {
            /* Third digit */
            for (third = second + 1; third <= 9; third++)
            {
                putchar('0' + first);
                putchar('0' + second);
                putchar('0' + third);

                if (first != 7 || second != 8 || third != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
