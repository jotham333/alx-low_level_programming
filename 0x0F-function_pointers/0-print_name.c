#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - to print name
 *
 * @name: the first parameter
 *
 * @f: function as arguement
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
	return;
	}
	f(name);
}
