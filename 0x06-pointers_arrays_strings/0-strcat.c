#include "main.h"

/**
 * _strcat - concatenates two strings.
 * and adds a terminating null byte.
 *
 * @src: pointer to source input.
 * @dest: pointer to destination input.
 *
 * Return: pointer to resulting string @dest.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

/** Find the end of the dest string */
	while (*ptr != '\0')
	{
		ptr++;
	}

/** Append the src string to the end of dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

/** Add a terminating null byte to the end of dest */
	*ptr = '\0';

/** Return a pointer to the resulting string dest */
	return (dest);
}
