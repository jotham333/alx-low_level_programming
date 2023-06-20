#include "main.h"
#include <string.h>

/**
 * _strcat - append the content of src to dest
 *
 *@dest: the destination parameters
 *
 *@src: the source parameter
 * Return: dest to the console
 */


char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
