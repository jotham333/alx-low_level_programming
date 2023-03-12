#include <stdio.h>


/**
 *main - the name of the function
 *
 *@argc: the arguement counter
 *
 *@argv: the arguement vector
 *
 *Return: always return 0
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
