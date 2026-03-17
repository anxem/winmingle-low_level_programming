#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Computes and prints the sum of even-valued Fibonacci terms not exceeding 4,000,000.
 */

int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, next;
    unsigned long sum = 0;

    while (fib1 <= 4000000)
    {
        if (fib1 % 2 == 0)
            sum += fib1;

        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }

    printf("%lu\n", sum);
    return (0);
}

