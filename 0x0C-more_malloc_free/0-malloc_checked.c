#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


/**
 *malloc_checked - allocate memory for input
 *
 *@b: the parameter
 *
 *Return: a if successful and NULL otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit (98);
	}
	return (a);
}
