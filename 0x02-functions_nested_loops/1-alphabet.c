#include "jlib.h"

/**
 * main - print a to z using putchar
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		print_alphabet(c);
	}
	print_alphabet('\n');
	return (0);
}
