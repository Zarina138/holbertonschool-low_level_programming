#include <stdio.h>

/**
 * Function that prints the alphabet, in lowercase, followed by anew line
 */

void print_alphabet(void)

{
    char a;

    for (a = 'a'; a <= 'z'; a++)
        putchar(a);
    putchar('\n');

    return(0);
}
