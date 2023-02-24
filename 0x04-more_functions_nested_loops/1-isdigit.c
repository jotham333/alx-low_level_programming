#include "main.h"
#include <ctype.h>


/**
 *_isdigit - checkes if a character is digit
 *
 * @c: is the parameter
 *
 * Return: 1 if successful and 0 if not
 */

int _isdigit(int c)
{

	if (isdigit(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

