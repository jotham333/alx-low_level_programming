#include "variadic_functions.h"
#include <stdarg.h>


/**
 *sum_them_all - to sum the parameter  of  function
 *
 *@n: the number of parameter
 *
 *Return: sum
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum, i, x;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
