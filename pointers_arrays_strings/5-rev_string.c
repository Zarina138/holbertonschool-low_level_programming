#include "main.h"

void rev_string(char *s)
{
    int i = 0, j = 0;
    char z;

    while (s[j] != '\0')
        j++;

    j--;

    while (i < j)
    {
	    z = s[i];
	    s[i] = s[j];
	    s[j] = z;
	    i++;
	    j--;
    }
}
