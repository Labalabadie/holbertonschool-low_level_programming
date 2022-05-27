#include "hash_tables.h"

/**
 *
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof((hast_tables_t*) * size));

	if (!ht)
		return (NULL);

	return (ht);
}
