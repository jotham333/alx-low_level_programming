#include "main.h"
#include <ctype.h>
#include <string.h>


/**
 * reverse_array - print array in a reverse order
 *
 * @a: array parameter
 *
 * @n: size of array parameter
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; a[i] < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
