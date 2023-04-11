#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>



/**
 * create_file - it create a new file and trucate it if the file already exists
 *
 * @filename: the name of the file to be created
 *
 * @text_content: the content to be writen into the  file
 *
 * Return: 1 if successful and -1 otherwise
 */



int create_file(const char *filename, char *text_content)
{
	int file, len, wr;

	len = 0;


	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		file = open(filename, O_CREAT | O_RDWR, 0600);

		if (file == -1)
		{
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		for (len = 0; text_content[len]; len++)
		{
			;
		}

		file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		wr = write(file, text_content, len);
		if (file == -1 || wr == -1)
		{
			return (-1);
		}
		close(file);
		return (1);
	}
	return (0);
}
