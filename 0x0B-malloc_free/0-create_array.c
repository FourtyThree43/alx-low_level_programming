#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *_array_;
	unsigned int i;

	/* Check if size is 0, return NULL */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	_array_ = malloc(size * sizeof(char));
	/* Check if malloc failed to allocate memory */
	if (_array_ == NULL)
		return (NULL);

	/* Fill the array with the given character */
	for (i = 0; i < size; i++)
		_array_[i] = c;
	/* Add null character to the end of the array */
	_array_[i] = '\0';

	/* Return the pointer to the array */
	return (_array_);
}
