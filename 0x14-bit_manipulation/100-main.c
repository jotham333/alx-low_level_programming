#include "main.h"



/**
 * main - the main function
 *
 * Return: 0 always
 */



int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
