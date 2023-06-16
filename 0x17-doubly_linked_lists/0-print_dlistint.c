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
    size_t count = 0;
  
    while (ptr != NULL)
    {
        printf("%d\n", ptr->n);
        ptr = ptr->next;
	count++;
    }

    printf("-> %lu element\n", count);
    return (count);
}

