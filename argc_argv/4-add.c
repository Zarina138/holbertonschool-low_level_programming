#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Return (Success)
 */
int main(int argc, char *argv[])
{
	int i, n;
	int cem = 0;

	for(i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		if (n > 0)
			cem += n;
	}

	printf("%d\n", cem);
	return (0);
}
