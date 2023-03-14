#include "main.h"
#include <stdlib.h>



/**
 * create_array - create an array of size size
 *
 *@size: size of the array
 *
 *@c: character of the array
 *
 *Return: NULL if size is equall to 0 and a otherwise
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
