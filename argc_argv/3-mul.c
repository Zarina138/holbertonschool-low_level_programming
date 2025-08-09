#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[]) 
{
	int eded1, eded2, cvb;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	eded1 = atoi(argv[1]);
	eded2 = atoi(argv[2]);
	
	cvb = eded1 * eded2;
	printf("%d\n", cvb);
	
	return (0);
}
