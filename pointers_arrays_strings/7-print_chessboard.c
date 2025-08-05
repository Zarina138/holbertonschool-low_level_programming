#include <stdio.h>

/**
 * print_chessboard - Prints a standard 8x8 chessboard pattern
 */
void print_chessboard(void)
{
	int i, j;
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				printf("# ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
