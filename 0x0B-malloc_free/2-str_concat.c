#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * str_concat - concatenate to arguement into a string
 *
 *@s1: first arguement
 *
 *@s2: secon arguement
 *
 *Return: a if successful and NULL otherwise
 */


char *str_concat(char *s1, char *s2)
{
	int i, len;
	char *a;

	len = (strlen(s1) + strlen(s2) + 1);
	a = malloc(len);

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		a[strlen(s1) + i] = s2[i];
	}

	a[len - 1] = '\0';

	return (a);
}
