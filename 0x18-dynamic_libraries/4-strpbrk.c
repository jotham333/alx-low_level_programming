#include "main.h"
#include <stddef.h>


/**
 *_strpbrk - searches a string for the first occurrence of any
 *character from a specified set of characters
 *
 *@s: variable to search for character
 *
 *@accept: set of character to serach for
 *
 *Return:  a pointer to the location of the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])

				return (&s[i]);
			}

	}
	return (NULL);
}
