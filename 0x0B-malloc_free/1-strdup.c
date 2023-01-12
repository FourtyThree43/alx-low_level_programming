#include "main.h"

/**
 * *_strdup - copies the string given as parameter.
 *
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Get the length of the original string */
	for (i = 0; str[i]; i++)

	/* Allocate memory for the duplicate string */
	dup = malloc((i + 1) * sizeof(char));

	/* Check if malloc failed to allocate memory */
	if (dup == NULL)
	{
		return (NULL);
	}

	/* Copy the original string to the duplicate string */
	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	/* Add null character to the end of the duplicate string */
	dup[i] = '\0';

	/* Return the duplicate string */
	return (dup);
}
