#include "hash_tables.h"

/**
* shash_table_create - creates a hash table.
* @size: size of the array.
*
* Return: poiter to the nrew array or
*          Null if it fails/error occurs.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *s_meza;

	/*Alloc mem for meza*/
	s_meza = malloc(sizeof(shash_table_t));
	if (s_meza == NULL)
		return (NULL);
	/*Alloc mem for meza->array and Init it and its element to NULL*/
	s_meza->array = calloc(size, sizeof(shash_table_t *));
	if (s_meza->array == NULL)
	{
		free(s_meza);
		return (NULL);
	}
	s_meza->size = size;
	return (s_meza);
}

/**
 * hash_table_set- that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 *         value must be duplicated.
 *         value can be an empty string.
 * * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index;
	shash_node_t *new_node = NULL, *temp_node = NULL, *prev = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	hash_index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[hash_index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			if (!temp_node->value)
				return (0);
			return (1);
		}
		prev = temp_node;
		temp_node = temp_node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key), free(new_node->value), free(new_node);
		return (0);
	}
	new_node->next = ht->array[hash_index];
	ht->array[hash_index] = new_node;
	if (prev != NULL)
		prev->snext = new_node;
	else
		ht->shead = new_node;
	new_node->sprev = prev;
	new_node->snext = NULL;
	if (new_node->sprev != NULL)
		new_node->sprev->snext = new_node;
	else
		ht->shead = new_node;
	if (new_node->snext != NULL)
		new_node->snext->sprev = new_node;
	else
		ht->stail = new_node;

	return (1);
}

/**
 * shash_table_get- Retrives a value associated with key.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 *
 * Return: value associated with the element,
 *         or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	shash_node_t *node;

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

/**
 * shash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Return: nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table in reverse order using the
 *                         sorted linked list.
 *
 * @ht: The hash table to print.
 *
 * Return: nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 *
 * Return: nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp_node;
	unsigned long int i;

	if (ht == NULL)
		return;
	/* Free nodes in the sorted linked list */
	node = ht->shead;
	while (node != NULL)
	{
		temp_node = node;
		node = node->snext;
		free(temp_node->key);
		free(temp_node->value);
		free(temp_node);
	}
	/* Free nodes in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp_node = node;
			node = node->next;
			printf("Deleting node with key '%s' and value '%s'\n", temp_node->key, temp_node->value);
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
	}
	free(ht->array); /* Free the array of pointers to nodes */
	free(ht); /* Free the hash table struct */
}
