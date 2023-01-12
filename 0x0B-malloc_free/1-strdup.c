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
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	/* Check if input string is NULL */
	if (str == NULL)
		return (NULL);

	/* Determine the length of the input string */
	while (str[len])
		len++;

	/* Allocate memory for the duplicate string */
	dup = malloc(sizeof(char) * (len + 1));

	/* Check if malloc failed to allocate memory */
	if (dup == NULL)
		return (NULL);

	/* Copy the input string to the duplicate string */
	while ((dup[i] = str[i]) != '\0')
		i++;

	/* Return the duplicate string */
	return (dup);
}
