#include "main.h"
#include <ctype.h>


/**
 *print_square - checkes if a character is digit
 *
 * @size: is the parameter
 *
 * Return: 1 if successful and 0 if not
 */


void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

	_putchar('\n');
	}
}

