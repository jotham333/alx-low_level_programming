#include "lists.h"

/**
 * sum_dlistint - sum the data of the list
 *
 * @head: the haed of the list
 *
 * Return: the sum of the list otherwise null on failure
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
