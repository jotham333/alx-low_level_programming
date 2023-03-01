#include "main.h"


/**
 *rev_string - print string in reverse
 *
 *@s; is a parameter
 */

void rev_string(char *s)
{
	int i,j;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		--j;
	}
	_putchar('\n');
}
