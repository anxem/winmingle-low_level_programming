#include <stdio.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMingle Community C Training
 * Description: Prints the size of various data types on the machine
 */

int main(void)
{
    /* Print the size of char */
    printf("Size of a char: %zu byte(s)\n", sizeof(char));

    /* Print the size of int */
    printf("Size of an int: %zu byte(s)\n", sizeof(int));

    /* Print the size of long int */
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));

    /* Print the size of long long int */
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));

    /* Print the size of float */
    printf("Size of a float: %zu byte(s)\n", sizeof(float));

    return 0;
}
