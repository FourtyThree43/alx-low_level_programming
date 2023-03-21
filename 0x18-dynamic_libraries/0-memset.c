#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer
 * @b: constant bytes
 * @n: pointed bytes
 *
 * Return: @s (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* Fill the first n bytes of the memeory area */
	/* pointed to by s with the constant byte b */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	/* Return a pointer to the memeory are s */
	return (s);
}
