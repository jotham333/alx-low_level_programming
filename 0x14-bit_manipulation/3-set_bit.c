#include "main.h"


/**
 * set_bit - set value of a bit to 1 ata a specified index
 *
 * @n: decimal number passed as pointer
 *
 * @index: index position to change
 *
 * Return: 1 if it successful and -1 otherwise
 */



int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	for (m = 1; index > 0; index--, m *= 2)
	{
		;
	}

	*n += m;

	return (1);
}
