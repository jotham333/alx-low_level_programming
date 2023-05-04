#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: the binary to convert
 *
 * Return: the converted unsigned int if succesful and 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}

		uint = uint * 2 + (b[i] - '0');
		i++;
	}

	return (uint);
}
