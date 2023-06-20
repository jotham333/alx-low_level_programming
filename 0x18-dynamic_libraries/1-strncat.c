#include "main.h"
#include <string.h>


/**
 *_strncat - append a defined amount of content from source file to dest
 *
 *@dest: destination parameter
 *
 *@src: source destination
 *
 *@n: quantity of content to be append
 *
 * Return: dest to the console
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
