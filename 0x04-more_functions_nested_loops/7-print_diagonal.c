#include "main.h"
#include <ctype.h>


/**
 *print_diagonal - checkes if a character is digit
 *
 * @n: is a mparameter
 *
 * Return: 1 if successful and 0 if not
 */


void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

	int row, col;

	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < row)
		{
			_putchar(' ');
			col++;
		}
		_putchar('\\');
		row++;
		_putchar('\n');
	}
	}
}
