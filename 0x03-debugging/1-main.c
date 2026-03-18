#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Stops an infinite loop by commenting out the problematic line
 */
 
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
    int i;
 
    printf("Infinite loop incoming :(\n");
 
    i = 0;
 
    /* while (i < 10)
    {
        putchar(i);
    } */
 
    printf("Infinite loop avoided! \\o/\n");
 
    return (0);
}

