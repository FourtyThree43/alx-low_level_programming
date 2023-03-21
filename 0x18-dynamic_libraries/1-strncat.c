#include "main.h"

/**
  * _strncat - concatenates two strings.
  *
  * @n: bytes.
  * @src: pointer to source input.
  * @dest: pointer to destnation input.
  *
  * Return: pointer to the resulting string @dest.
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	/* Find the end of the dest string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append at most n bytes from src to the end of dest */
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add a terminating null byte to the end of dest */
	*ptr = '\0';

	/* Return a pointer to the resulting string dest */
	return (dest);
}

