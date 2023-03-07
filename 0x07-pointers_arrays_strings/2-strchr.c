#include "main.h"
#include <stddef.h>



/**
 *_strchr - look for a character in a string
 *
 *@s: the variable that contains the string
 *
 *@c: the character to look for
 *
 *Return: the character if found un the string
 */


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}
	return (NULL);
}
