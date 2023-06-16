#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of the list
 *
 * @head: the head of the list
 *
 * @n: the data of the list
 *
 * Return: NULL if new node is NULL or new node otherwise
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		new_node->prev = ptr;
		ptr->next = new_node;
	}
	return (new_node);
}
