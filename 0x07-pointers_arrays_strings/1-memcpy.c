#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 *
 *  @src: pointer source.
 *  @dest: pointer destination.
 *  @n: bytes
 *
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

/* loop to iterate through the memory areas pointed to */
/* by src and dest, copying n bytes from src to dest */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
/* Return a pointer to the memeory area dest */
	return (dest);
}
