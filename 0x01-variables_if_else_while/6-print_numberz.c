#include <stdio.h>

/**
 * main - print numbers from 0-9 using only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;


	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
