#include "lists.h"

/**
 * dlistint_len - list the number of element in a double linked list
 *
 * @h: the head of the list
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
