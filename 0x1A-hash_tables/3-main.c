#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int hs;

    ht = hash_table_create(1024);
    hs = hash_table_set(ht, "hetairas", "mentioner");
    printf("%d\n", hs);
    return (EXIT_SUCCESS);
}
