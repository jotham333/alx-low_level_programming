#include "main.h"
#include <string.h>


/**
 *_memset - fill a specified amount of byte in an array with a specified value
 *
 *@s: pointer to the address
 *
 *@b: the value to be inputed
 *
 *@n: the size of the array that the input will cover
 *
 *Return: s to the console
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
