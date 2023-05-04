#include "main.h"

/**
 * _putchar - print a character to the console
 *
 * @c: the character to print
 *
 * Return: int
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
