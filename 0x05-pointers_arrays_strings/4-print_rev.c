#include "main.h"
#include <stdio.h>

/**
 *print_rev - print out in reverse
 *
 *@s; the parameter
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		--i;
	}
	_putchar('\n');
}
