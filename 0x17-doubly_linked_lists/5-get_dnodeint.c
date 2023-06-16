#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at an index
 *
 * @head: the head of the list
 *
 * @index: the index
 *
 * Return: ptr otherwise null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}
