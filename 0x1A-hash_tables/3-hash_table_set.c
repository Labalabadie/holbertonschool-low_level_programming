#include "hash_tables.h"

/**
 *hash_table_set - Adds an element to the hash table.
 *@ht: pointer to hash_table_t.
 *@key: key
 *@value: value asociated to key.
 *Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	unsigned long int key_value;

	if (!ht || !key || *key == '\0')
		return (0);

	key_value = key_index((unsigned const char *)key, ht->size);

	if (!ht->array[key_value])
	{
		tmp = malloc(sizeof(hash_node_t *));
		if (!tmp)
			return (0);
		tmp->next = NULL;
		tmp->key = strdup(key);
		tmp->value = strdup(value);
		ht->array[key_value] = tmp;
		return (1);
	}

	if (ht->array[key_value])
	{
		tmp = malloc(sizeof(hash_node_t *));
		if (!tmp)
			return (0);
		tmp->key = strdup(key);
		tmp->value = strdup(value);
		tmp->next = ht->array[key_value];
		ht->array[key_value] = tmp;
	}
	return (1);
}
