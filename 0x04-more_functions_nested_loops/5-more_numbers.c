#include "main.h"
#include <ctype.h>


/**
 *more_numbers- checkes if a character is digit
 *
 * Return: 1 if successful and 0 if not
 */


void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
			_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		j++;
		}
	_putchar('\n');
	}
}
