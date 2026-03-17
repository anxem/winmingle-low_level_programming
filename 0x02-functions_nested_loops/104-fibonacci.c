#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the first 98 Fibonacci numbers, separated by comma and space.
 */

int main(void)
{
    int i;
    unsigned long first1 = 0, first2 = 0;
    unsigned long second1 = 1, second2 = 2;
    unsigned long next1, next2;

    printf("%lu, %lu", second1, second2);

    for (i = 3; i <= 98; i++)
    {
        /* Add lower parts */
        next2 = second1 + second2;
        next1 = first1 + first2;

        /* Handle overflow of 32-bit unsigned long (if next2 exceeds 10^10) */
        if (next2 < second2)
        {
            next1 += 1;
        }

        /* Print next Fibonacci number */
        if (next1 == 0)
            printf(", %lu", next2);
        else
            printf(", %lu%010lu", next1, next2);

        /* Update variables */
        first1 = first2;
        second1 = second2;
        first2 = next1;
        second2 = next2;
    }
    printf("\n");
    return (0);
}

