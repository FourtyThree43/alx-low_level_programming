#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - creates a hash table.
* @size: size of the array.
*
* Return: poiter to the nrew array or
*          Null if it fails/error occurs.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *meza;

	/*Alloc mem for meza*/
	meza = malloc(sizeof(hash_table_t));
	if (meza == NULL)
		return (NULL);
	/*Alloc mem for meza->array and Init it and its element to NULL*/
	meza->array = calloc(size, sizeof(hash_table_t *));
	if (meza->array == NULL)
	{
		free(meza);
		return (NULL);
	}

	meza->size = size;

	return (meza);
}
