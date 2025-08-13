#include "main.h"
#include <stdlib.h>

unsigned int my_lentgh(const char *s);
char *_strdup(char *str);
unsigned int my_length(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return len;
}

char *_strdup(char *str)
{
        char *cpy;
        unsigned int i;
        unsigned int len = my_length(str) + 1;

	if (str == NULL)
		return (NULL);

        cpy = malloc(len);
        if (!cpy)
                return (NULL);
        for (i = 0; i < len; i++)
                cpy[i] = str[i];
        return (cpy);
}
