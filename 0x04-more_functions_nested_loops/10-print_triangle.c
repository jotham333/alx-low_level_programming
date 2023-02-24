#include "main.h"
#include <ctype.h>


/**
 *print_triangle - checkes if a character is digit
 *
 * @size: is the parameter
 *
 * Return: 1 if successful and 0 if not
 */


void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

