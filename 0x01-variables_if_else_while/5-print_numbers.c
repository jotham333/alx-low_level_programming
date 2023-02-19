#include <stdio.h>

/**
 * main - Print integers from 0 - 9
 *
 * Return: Alwats 0 (Success)
 *
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
