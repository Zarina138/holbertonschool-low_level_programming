#include "main.h"
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int a;
	for(a = 0; a < height; a++)
		free(mas[a]);
	free(mas);
	return;
}
