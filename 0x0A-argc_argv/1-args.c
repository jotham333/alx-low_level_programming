#include <stdio.h>


/**
 *main - name of the function
 *
 * @argc: the arguement counter
 *
 * @argv: note used
 *
 *Return: always 0
 */



int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
