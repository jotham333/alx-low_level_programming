#include "main.h"

/**
 *print_last_digit - print the last digit of an input
 *@i: is an integer parameter
 * Return: 0 if success
 */

int print_last_digit(int i)
{
	int j;

	if (i < 0)
		i = -i;

	j = i % 10;
	if (j < 0)
	j = -j;

	_putchar(j + '0');

	return (j);
}
