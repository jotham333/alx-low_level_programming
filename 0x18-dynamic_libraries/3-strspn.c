#include "main.h"
#include <stdbool.h>


/**
 *_strspn - search for corresponding characters in array and count them
 *
 *@s: variable the search will occur
 *
 *@accept : varaible to be searched
 *
 *Return: len if characters no longer match
 */



unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;
	bool found;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				found = true;
				break;
			}
		}
		if (!found)
		{
			break;
		}
	}
	return (len);
}
