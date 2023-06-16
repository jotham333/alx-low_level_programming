#include "lists.h"

/**
 * print_dlistint - prints the list of a doublr link list
 *
 * @h: the head of the link list
 *
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}

