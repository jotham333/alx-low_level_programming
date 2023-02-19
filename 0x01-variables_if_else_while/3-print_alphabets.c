#include <stdio.h>

/**
 * main - print alphabet in both upper and lower case in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}


	n = 'A';

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
