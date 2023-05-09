#include "main.h"



/**
 * _strlen - Determine the lenght of a string
 *
 * @str: the string lenght to be calculated
 *
 * Return the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}


/**
 * create_file - create a file an truncate it
 *
 * @filename: the file to be created
 *
 * @text_content: the content to write into the file
 *
 * Return: 1 on success and -1 otherwise
 */


int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);
	len = _strlen(text_content);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (o == -1)
			return (-1);
	w = write(o, text_content, len);
		if (w == -1)
			return (-1);

	close(o);

	return (1);
}













