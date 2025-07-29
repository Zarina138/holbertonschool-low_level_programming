#include "main.h"

/**
 * print_line - Prints a line hehehe
 * @n: nanana
 *
 * Description: Bla bla bla
 */
void print_line(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
