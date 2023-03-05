#include "main.h"


/**
 * leet - 1337 encryption
 *
 * @n: parameter of the function
 *
 *Return: n
 */


char *leet(char *n)
{
	int i, j;
	char string1[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == string1[j])
			{
				n[i] = string2[j];
			}
		}
	}
	return (n);
}
