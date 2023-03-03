#include "main.h"
#include <ctype.h>
#include <string.h>


/**
 * string_toupper - convert string to uppercase
 *
 * @a: parameter
 *
 * Return: it returns the uppercase form of the string
 */


char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (islower(a[i]))
		{
			a[i] = toupper(a[i]);
		}
	}
	return (a);
}
