#include "main.h"


/**
 *_strstr - search for a substring in s string
 *
 *@haystack: the string to be searched into
 *
 *@needle: the substring to be searched
 *
 *Return: haystack is string is found and NULL if not
 */

char *_strstr(char *haystack, char *needle)
{


	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
