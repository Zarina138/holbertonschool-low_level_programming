#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int cem_esas = 0;
	int cem_ikinci = 0;

	for(int i = 0; i < size; i++)
	{
		cem_esas += a[i * size + i];
	        cem_ikinci += a[i * size + (size - 1 - i)];
	}
	printf("%d",cem_esas + cem_ikinci);
}
