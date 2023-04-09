#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: Le keys
 * @size: is the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 *         in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, hash_index;

	hash_value = hash_djb2(key);
	hash_index = hash_value % size;

	return (hash_index);
}
