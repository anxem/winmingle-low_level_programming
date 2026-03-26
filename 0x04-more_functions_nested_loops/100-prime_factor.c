#include <stdio.h>
#include <math.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Finds and prints the largest prime factor of 612852475143
 */

int main(void)
{
    long n = 612852475143;
    long divisor = 2;

    while (n % divisor == 0)
    {
        n /= divisor;
    }

    divisor = 3;
    while (n > 1 && divisor <= sqrt(n))
    {
        while (n % divisor == 0)
	{
	    n /= divisor;
	}
	/*If n was divided, the current divisor is a candidate */
	/*but we keep going to find the larger ones. */
	divisor += 2;
    }
    printf("%ld\n", n);

    return (0);
}

