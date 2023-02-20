#include <stdio.h>


/**
 * main - print an output that is being separated by comma and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 10)
	{
		putchar(i + '0');
			if (i <= 8)
			{	putchar(',');
				putchar(' ');
			}
		i++;
	}

	putchar('\n');

	return (0);
}
