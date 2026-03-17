#include "main.h"
#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints "_putchar" followed by a new line using _putchar
 */

int main(void)
{
    int i = 0;
    char c;
    
    char a[] = "_putchar\n";
    
    while (i <= 8) {
        c = a[i];
	_putchar(c);
	i++;
    }

    return 0;
}
