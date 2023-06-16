#include "lists.h"

/**
 *
 *
 *
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *ptr = h;
    
    while (ptr != NULL)
    {
        printf("%d", ptr->n);
        ptr = ptr->next;
	putchar('\n');
    }
    return (0);
}

