#include "main.h"

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the n times table, starting from 0.
 */

void print_times_table(int n)
{
    int i, j, prod;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            prod = i * j;

            /* Print comma and spaces if not first number */
            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');

                if (prod < 10)
                {
                    _putchar(' ');
                    _putchar(' ');
                }
                else if (prod < 100)
                {
                    _putchar(' ');
                }
            }

            /* Print hundreds digit if any */
            if (prod >= 100)
                _putchar((prod / 100) + '0');

            /* Print tens digit if any */
            if (prod >= 10)
                _putchar(((prod / 10) % 10) + '0');

            /* Print ones digit */
            _putchar((prod % 10) + '0');
        }
        _putchar('\n');
    }
}

