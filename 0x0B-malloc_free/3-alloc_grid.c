#include "main.h"
#include <stdlib.h>
#include <stdio.h>



/**
 *alloc_grid - print a 2D grid
 *
 *@width: width of the array
 *
 *@height: height
 *
 *Return: a if successful and NULL otherwise
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	a = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		for (j = 0; j < i; j++)
		{
			a[i][j] = 0;
		}
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	return (a);
}
