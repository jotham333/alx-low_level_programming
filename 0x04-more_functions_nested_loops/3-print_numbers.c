#include "main.h"
#include <ctype.h>


/**
 *print_numbers - checkes if a character is digit
 *
 * Return: 1 if successful and 0 if not
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
