#include "main.h"
#include <stdio.h>


/**
 *main - checkes if a character is digit
 *
 * Return: 1 if successful and 0 if not
 */


int main(void)
{
	long int num = 612852475143;
	long int factor = 2;

	while (num != factor)
	{
		if (num % factor == 0)
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", factor);

	return (0);
}
