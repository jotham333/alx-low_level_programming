#include "main.h"
#include <string.h>
#include <unistd.h>
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
	unsigned int i, j, k, len;
	char *a;

	k = strlen(s2) - n;
	len = strlen(s1) + (strlen(s2) - k) + 1;
	a = malloc(sizeof(char) * len);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}

	for (j = 0; j < (strlen(s2) - k); j++)
	{
		if (s2 == NULL)
		{
			a[strlen(s1) + j] = '\0';
		}

		else
		{
			a[strlen(s1) + j] = s2[j];
		}
	}
	a[len - 1] = '\0';
	return (a);
}
