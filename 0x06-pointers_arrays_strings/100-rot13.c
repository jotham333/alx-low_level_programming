#include "main.h"


/**
 * rot13 - To encrypt code using rot13
 *
 *@n: parameter of the function
 *
 * Return: n to the console
 */

char *rot13(char *n)
{
	int i, j;
	char string1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char string2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == string1[j])
			{
				n[i] = string2[j];
				break;
			}
		}
	}
	return (n);
}

