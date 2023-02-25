#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print number inrespect to 98
 *
 *@n: parameter of the function
 */


void print_to_98(int n)
{
	int i, j;

	i = n;
	j = 98;

	if (i <= j)
		for (i = n; i <= j; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	else if (i >= j)
	{
		for (i = n; i >= j; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
