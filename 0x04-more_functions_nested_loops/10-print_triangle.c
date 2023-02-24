#include "main.h"


/**
 *print_triangle - checkes if a character is digit
 *
 * @size: is the parameter
 *
 * Return: 1 if successful and 0 if not
 */


void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('#');
	for (i = 1; i <= size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
