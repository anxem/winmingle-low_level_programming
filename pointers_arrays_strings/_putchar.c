#include <unistd.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Writes the character c to the stdout
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
