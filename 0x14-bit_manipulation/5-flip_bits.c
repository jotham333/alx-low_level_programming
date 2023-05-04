#include "main.h"


/**
 * flip_bits - flip bits to convert onr number to another
 *
 * @n: first number to convert
 *
 * @m: second number to convert
 *
 * Return: number of bits that was needed to flip
 */



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_output = n ^ m;
	unsigned int count = 0;

	while (xor_output > 0)
	{
		if (xor_output & 1)
			count++;
		xor_output >>= 1;
	}

	return (count);
}
