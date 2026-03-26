#include <stdio.h>

/**
 * Author: Chibuizor Anselm Obilor
 * Program: WinMinlge Community C Training
 * Description: Prints numbers from 1 to 100, followed by a new line.
 *              Multiples of 3 prints Fizz, multiples of 5 print Buzz,
 *              and multiples of both print FizzBuzz.
 */


int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
	{
	    printf("FizzBuzz");
	}
	else if (i % 5 == 0)
	{
	    printf("Buzz");
	}
	else if (i % 3 == 0)
	{
	    printf("Fizz");
	}
	else
	{
	    printf("%d", i);
	}

	if (i < 100)
	{
	    printf(" ");
	}
    }
    printf("\n");

    return (0);
}

