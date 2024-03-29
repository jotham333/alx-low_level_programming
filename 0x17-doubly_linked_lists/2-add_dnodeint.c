#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of a doubly linked list
 *
 * @head: the head of the list
 *
 * @n: data of the list
 *
 * Return: NULL if new node is empty otherwise new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);


	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
