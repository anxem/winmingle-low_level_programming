#include <unistd.h>

/**
 * Author: Chibuzor Anselm Obilor
 * Program: WinMIngle Community C Training
 * Description: Prints a quote to standard error using write and return 1
 */

int main(void)
{
    char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Write the message to standard error (file descriptor 2) */
    write(2, msg, sizeof(msg) - 1);

    return 1;
}
