#include <stdio.h>

/**
 * main - print from 0 - 15 in base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'a', 'b', 'c', 'd', 'e', 'f',};

	int i;

	i = 0;
	while (i < 16)
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
