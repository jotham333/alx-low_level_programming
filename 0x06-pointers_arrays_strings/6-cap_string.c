#include "main.h"
#include <ctype.h>


/**
 * cap_string - capitalize all the words in a string
 *
 * @a: parameter of the function
 *
 * Return: char to the console
 */


char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 || a[i - 1] == ' ' || a[i - 1] == '\n')
		{
			a[i] = toupper(a[i]);
		}
	}
	return (a);
}
