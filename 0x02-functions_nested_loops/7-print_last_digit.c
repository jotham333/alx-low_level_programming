#include "main.h"

/**
 *print_last_digit - print the last digit of an input
 *@i: is an integer parameter
 * Return: 0 if success
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;

	_putchar(j + '0');

	return (0);
}
