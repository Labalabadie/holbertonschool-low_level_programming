#include "hash_tables.h"
/**
 *hash_table_get - retrieves a value associated with a key.
 *@ht: hash table to look into.
 *@key: the key to look for.
 *Return: value associated with the element or NULL if Key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int key_value = 0;
	hash_node_t *tmp;

	if (!ht || !key || *key == '\0')
		return (NULL);
	
	key_value = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[key_value];
	while(tmp && tmp->key != key)
		tmp = tmp->next;
	if (strcmp(tmp->key, key) == 0)
		return (tmp->value);
	return (NULL);
}
