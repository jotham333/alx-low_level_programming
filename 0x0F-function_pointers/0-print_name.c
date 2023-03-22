#include "function_pointers.h"


/**
 * print_name - to print name
 *
 * @name: the first parameter
 *
 * @f: function as arguement
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
