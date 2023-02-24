#include "main.h"
#include <ctype.h>


/**
 *print_line - checkes if a character is digit
 *
 * @n: is the parameter
 *
 * Return: 1 if successful and 0 if not
 */


void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

	if (n <= 0)
	{
		_putchar('\n');
	}
}
