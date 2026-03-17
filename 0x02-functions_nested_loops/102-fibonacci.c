#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the first 50 Fibonacci numbers starting with 1 and 2.
 */

int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, next;
    int i;

    for (i = 1; i <= 50; i++)
    {
        if (i == 50)
            printf("%lu\n", fib1); /* Last number, print newline */
        else
            printf("%lu, ", fib1);

        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }

    return (0);
}

