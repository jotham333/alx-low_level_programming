#include "main.h"
#include <string.h>

/**
 *_strlen - print the lenght of a string;
 *
 *@s: parameter
 *
 *Return: the count
 */


int _strlen(char *s)
{
	int len = strlen(str);
	int count = 0;

	for (int i = 0; i < len; i++)
	{
	if (str[i] == ' ')
	{
	count++;
	}
	}

	return (count);
}
