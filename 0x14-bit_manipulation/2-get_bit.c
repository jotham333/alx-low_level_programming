#include "main.h"



/**
 * get_bit - get the value of a bit
 *
 * @n: number to evaluate
 *
 * @index: index starting fro 0 of the bit we want to get
 *
 * Return: Value of bit at index or -1 otherwise
 */



int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;
	int result;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = n >> index;
	result = m & 1;

	return (result);
}
