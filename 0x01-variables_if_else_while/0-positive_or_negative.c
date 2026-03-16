#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Assigns a random number to n and prints if it is positive, negative or zero
 */

int main(void)
{
    int n;

    /* Generate a random number each time the program runs */
    srand(time(0));
    n = rand() - RAND_MAX / 2; /*this subtracts the random number by half the max random number so as to also get negative value*/

    if (n > 0)
	    printf("%d is positive\n", n);
    else if (n < 0)
	    printf("%d is negative\n", n);
    else
	    printf("%d is negative\n", n);

    return 0;
}
