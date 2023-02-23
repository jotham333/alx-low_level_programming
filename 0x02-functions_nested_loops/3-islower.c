#include "main.h"
#include <ctype.h>

/**
 * int _islower - print c if a character is lowercase
 *
 * _islower function check if the character is lowercase
 *
 * c declares that the value in var c is integer
 *
 * Return: 1 if c is lowercase and 0 if not
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
