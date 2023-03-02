#include "main.h"
#include <string.h>


/**
 *_strcmp - compare string in two file
 *
 * @s1: the first file parameter
 *
 * @s2: the second file parameter
 *
 * Return: + if greater, - if lesser and 0 if equal
 */


int _strcmp(char *s1, char *s2)
{
	int res;

	res = strcmp(s1, s2);
	return (res);
}
