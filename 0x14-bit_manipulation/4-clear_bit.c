#include "main.h"



/**
 * clear_bit - set the value of a bit to 0
 *
 * @n: pointer to decimal number to be changed
 *
 * @index:index position to change
 *
 * Return: 1 if successful and -1 otherwise
 */



int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = index;

	for (i = 1; m > 0; i *= 2, m--)
	{
		;
	}

	if ((*n >> index) & 1)
	{
		*n -= i;
	}

	return (1);
}
