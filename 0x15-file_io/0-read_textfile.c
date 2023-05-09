#include "main.h"



/**
 * read_textfile - the function read a text file
 * and print to the standard output
 *
 * @filename: the file to read from
 *
 * @letters: amount of file to read
 *
 * Return: the actual number of letters read || 0 otherwise
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *d_file;
	char *buff;
	ssize_t r, print;


	buff = malloc(sizeof(char) * (letters + 1));
		if (buff == NULL)
			return (0);

	d_file = fopen(filename, "r");
		if (d_file == NULL)
		{
			free(buff);
			return (0);
		}

	r = fread(buff, sizeof(char), letters, d_file);
	buff[r] = '\0';

	print = fprintf(stdout, "%s", buff);

	if  (print == -1 || print != r)
	{
		free(buff);
		fclose(d_file);
		return (0);
	}

	free(buff);
	fclose(d_file);

	return (print);
}
