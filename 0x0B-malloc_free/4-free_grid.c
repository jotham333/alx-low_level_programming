#include "main.h"
#include <stdlib.h>




/**
 *free_grid - to free allocated memory space
 *
 *@grid: the memory to be freed
 *
 *@height: the height of the grid
 */



void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
