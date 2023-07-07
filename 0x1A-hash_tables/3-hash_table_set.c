#include "hash_tables.h"


/**
 * hash_table_set - setup the hash table
 *
 * @ht: Pointer to the hash table
 *
 * @key: Pointer to the key of the table
 *
 * @value: Pointer to the value of the hash table
 *
 * Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;

	current = ht->array[index];
	while (current !=  NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if  (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
