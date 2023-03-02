#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - append the content of src to dest
 *
 *@dest && @src - the parameters
 *
 * Return: dest to the console
 */


char *_strcat(char *dest, char *src)
{
	strcat(dest , src);
	return (dest);
}
