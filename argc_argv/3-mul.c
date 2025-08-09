#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Return (Success)
 */

int main(int argc, char *argv[]) 
{
	while (argc != 3)
		printf("Error\n");
	return (1);
	
	int eded1 = atoi(argv[1]);
	int eded2 = atoi(argv[2]);
	int cvb = eded1 * eded2;
	
	printf("%d\n", cvb);
	
	return (0);
}
