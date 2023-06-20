#include "main.h"
#include <string.h>


/**
 *_strncpy - to copy a specified amount of data from one file to another
 *
 * @dest: the destination parameter
 *
 * @src: the source parameter
 *
 * @n: the quatity of data
 *
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
