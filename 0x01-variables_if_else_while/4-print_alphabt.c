#include <stdio.h>


/**
 *
 * main - print alphabet from a-z excluding e and q
 *
 * Recover: Always 0 (Success)
 */

int main(void)
{
	char n = 'a';

		while (n <= 'z' && n != 'e' && n != 'q')
		{
			putchar(n);
			n++;
		}

		putchar('\n');
		return (0);
}
