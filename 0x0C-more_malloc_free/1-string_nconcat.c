#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>


/**
 *string_nconcat - concatenate two variable into an allocated variable
 *
 *@s1: first parameter
 *
 *@s2: second parameter
 *
 *@n: number of byte of s2
 *
 *Return: a if successful and NULL otherwise
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *a;

	len = strlen(s1) + n + 1;
	a = malloc(sizeof(char) * len);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';
	return (a);
}
