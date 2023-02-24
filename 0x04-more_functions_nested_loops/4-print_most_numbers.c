#include "main.h"
#include <ctype.h>


/**
 *print_most_numbers -  checkes if a character is digit
 *
 * Return: 1 if successful and 0 if not
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
		_putchar(i + '0');
		}
	i++;
	}
	_putchar('\n');
}
