#include "main.h"


/**
 *rev_string - print string in reverse
 *
 *@s; is a parameter
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
