#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 *argstostr - turns arguement to string
 *
 *@ac: arguement counter
 *
 *@av: arguement vector
 *
 *Return: j if successful and NULL otherwise
 */

char *argstostr(int ac, char **av)
{
	int i, len;
	char *a, *j;

	if (av == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; i < ac; i++)
	{
		len = len + strlen(av[i]) + 1;
	}

	j = malloc(sizeof(char) * len);

	if (j == NULL)
	{
		return (NULL);
	}

	a = j;

	for (i = 0; i < ac; i++)
	{
		strcpy(a, av[i]);
		a = a + strlen(av[i]);
		*a++ = '\n';
	}
	*--a = '\0';
	return (j);
}
