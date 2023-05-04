#include "main.h"



/**
 * print_binary - print binary to the console
 *
 * @n: the int to convert to binary
 */


void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
