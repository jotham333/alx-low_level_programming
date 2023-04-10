#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - read the content of afile and write it to the console
 *
 * @filename: the file that has the content
 *
 * @letters: the number of byte to read
 *
 * Return: returns the number of byte read
 */




ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, wr;

	char *buffer;


	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	file = open(filename, O_RDONLY);

	rd = read(file, buffer, letters);

	wr = write(STDOUT_FILENO, buffer, rd);

	if (file == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);

	close(file);

	return(wr);
}
