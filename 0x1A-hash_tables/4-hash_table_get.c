#include "hash_tables.h"

/**
 * hash_table_get - the the value of a key
 *
 * @ht: Pointer to the hash table
 *
 * @ket: Pointer to the key
 *
 * Return: Returns the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
