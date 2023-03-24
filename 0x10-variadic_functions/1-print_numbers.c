#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - print parameter
 *
 *@separator: the string separator
 *
 *@n: the number of parameter
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
