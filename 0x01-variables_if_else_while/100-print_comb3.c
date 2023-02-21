#include <stdio.h>

/**
 * main - print two digit combinatination of integers,
 * in ascending order without repeating and interchanging same figures
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	i = 0;
	j = i + 1;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
