#include <stdio.h>

/**
 * main - Print alphabet in ascending order from a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'A';

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
