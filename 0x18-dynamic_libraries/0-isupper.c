#include "main.h"
#include <ctype.h>


/**
 *_isupper - checkes if a character is uppercase
 *
 * @c: is the parameter
 *
 * Return: 1 if successful and 0 if not
 */


int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

