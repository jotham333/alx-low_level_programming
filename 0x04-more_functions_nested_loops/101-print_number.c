#include "main.h"
#include <ctype.h>


/**
 *print_number - checkes if a character is digit
 *
 * @n: is the parameter
 *
 * Return: 1 if successful and 0 if not
 */


void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
	_putchar('-');
	num = -n;
	}
	else
	{
	num = n;
	}

	if (num / 10)
	{
	print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}
