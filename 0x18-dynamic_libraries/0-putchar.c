#include "main.h"

/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
