#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *_strdup - copy string given to the parameter
 *
 *@str: parameter the function receives
 *
 *Return: a if successful and NULL otherwise
 */

char *_strdup(char *str)
{
	int len;
	char *a;

	len = strlen(str) + 1;
	a = malloc(len);
	if (str == NULL)
	{
	return (NULL);
	}
	if (a == NULL)
	{
	return (NULL);
	}
	strcpy(a, str);
	return (a);
}
