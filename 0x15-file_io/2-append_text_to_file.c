#include "main.h"



/**
 * _strlen - cal the len of a str
 *
 * @str: the str len to be cal
 *
 * Return: len of the string
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
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: The file to edit
 *
 * @text_content: The string to e added to the file
 *
 * Return: 1 if successful and -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, len;

	if (filename == NULL)
		return (-1);

	len = _strlen(text_content);

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, len);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}

















