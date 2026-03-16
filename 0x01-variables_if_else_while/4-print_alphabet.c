#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet except q and e
 */

int main(void)
{
    char letter;

    /* loop through a to z */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        /* skip 'q' and 'e' */
	if (letter != 'q' && letter != 'e')
	{
	    putchar(letter);
	}
    }

    putchar('\n');

    return 0;
}
