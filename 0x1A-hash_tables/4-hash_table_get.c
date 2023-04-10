#include "hash_tables.h"

/**
 * hash_table_get- Retrives a value associated with key.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 *
 * Return: value associated with the element,
 *         or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	hash_index = key_index((const unsigned char *)key, ht->size);
	if (hash_index >= ht->size)
		return (NULL);

	node = ht->array[hash_index];

	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
