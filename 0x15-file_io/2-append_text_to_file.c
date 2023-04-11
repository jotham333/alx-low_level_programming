#include "main.h"
#include <stddef.h>
#include <unistd.h>

/**
 * append_text_to_file - append text content to a file
 *
 *
 * @filename: the file to append the content to
 *
 * @text_content: the text content to append to the file
 *
 * Return: 1 if successful and -1 other wise
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, wr;

	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}


	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			;
		}
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	wr = write(file, text_content, len);
	if (wr == -1)
	{
		return (-1);
	}
	close(file);

	return (1);
}
