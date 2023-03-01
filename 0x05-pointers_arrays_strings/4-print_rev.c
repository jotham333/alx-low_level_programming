#include "main.h"
#include <stdio.h>

/**
 *print_rev - print out in reverse
 *
 *@s; the parameter
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
