#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: Number of bytes to be allocated.
 *
 * Return: Pointer to the allocated memory
 * if malloc fails (98)
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	/* Allocate memory using malloc */
	mem = malloc(b);
	/* Check if malloc failed */
	if (mem == NULL)
	{
		exit(98);
	}
	/* Return pointer to allocated memory */
	return (mem);
}
