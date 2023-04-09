#include "hash_tables.h"

/**
 * hash_table_set- that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 *         value must be duplicated.
 *         value can be an empty string.
 * * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp_node;
	unsigned int hash_index;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	/* Initialize the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	hash_index = key_index((const unsigned char *)key, ht->size);
	/* If the index is unoccupied, insert the new node */
	if (ht->array[hash_index] == NULL)
	{
		ht->array[hash_index] = new_node;
		return (1);
	}
	/* If the index is occupied, handle collisions by chaining */
	temp_node = ht->array[hash_index];
	while (temp_node != NULL)
	{
		/* If the key already exists, update the value and free the new node */
		if (strcmp(temp_node->key, key) == 0)
		{
			free(new_node->key), free(new_node->value), free(new_node);
			temp_node->value = strdup(value);
			return (1);
		}
		temp_node = temp_node->next;
	}
	new_node->next = ht->array[hash_index];
	ht->array[hash_index] = new_node;

	return (1);
}
