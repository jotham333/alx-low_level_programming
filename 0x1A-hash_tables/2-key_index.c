#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * 
 * @key: pointer to the key index to be given
 *
 * @size: pointer to the size of the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
