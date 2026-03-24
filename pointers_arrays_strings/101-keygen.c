#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Program that generates a random valid password for crackme program
 */

int main(void)
{
    int sum;
    char c;


    srand(time(NULL));
    sum = 0;

    /* Accumulate random characters until we are close to 2772 */
    while (sum < (2772 - 122))
    {
        c = (rand() % 90) + 33;
	putchar(c);
	sum += c;
    }
    /* print the final character to reach exactly 2772 */
    putchar(2772 - sum);
    putchar('\n');

    return (0);
}

