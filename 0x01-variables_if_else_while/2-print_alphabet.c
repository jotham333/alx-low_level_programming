#include <stdio.h>

/**
 * main - Print alphabet in ascending order from a-z
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
	putchar('\n');

	return (0);
}
