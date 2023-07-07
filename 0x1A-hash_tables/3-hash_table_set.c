#include "hash_tables.h"


/**
 * Sets a key/value pair in the hash table.
 *
 * This function adds or updates a key/value pair in the provided hash table.
 * If the key already exists, the associated value is updated. If the key does not
 * exist, a new key/value pair is added to the hash table.
 *
 * @param ht The hash table to add/update the key/value pair.
 * @param key The key to be added/updated. Must not be an empty string.
 * @param value The value associated with the key. It will be duplicated internally.
 *              It can be an empty string.
 * @return 1 if the operation is successful, 0 otherwise.
 *         Returns 1 when the key/value pair is successfully added/updated.
 *         Returns 0 if the provided hash table is NULL, the key is NULL or empty,
 *         or if memory allocation fails.
 *
 * In case of a collision (multiple keys hashed to the same index),
 * the new key/value pair is added at the beginning of the linked list
 * at the corresponding index.
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
