#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be reversed and printed
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
