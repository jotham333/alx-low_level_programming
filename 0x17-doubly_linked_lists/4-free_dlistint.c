#include "lists.h"

/**
 * free_dlistint - free the linked list
 *
 * @head: the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
}
