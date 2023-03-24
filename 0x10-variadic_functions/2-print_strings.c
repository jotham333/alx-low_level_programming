#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - to print string
 *
 *@separator: to separate the string
 *
 *@n: the number of arguement
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		printf("%s", x);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

		if (x == NULL || *x == '\0')
		{
			printf("nil");
		}

	}
	va_end(args);
	printf("\n");
}
