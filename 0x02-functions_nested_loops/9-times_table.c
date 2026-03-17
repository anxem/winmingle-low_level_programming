#include "main.h"

/**
 * Author: Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the 9 times table starting with 0
 */

void times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            /* Print space if needed for alignment */
            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');

                /* Add extra space for single-digit numbers after comma */
                if (product < 10)
                    _putchar(' ');
            }

            /* Print digits */
            if (product >= 10)
            {
                _putchar((product / 10) + '0');
                _putchar((product % 10) + '0');
            }
            else
                _putchar(product + '0');
        }
        _putchar('\n');
    }
}

