#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *_strdup - copies the string given as parameter.
 * From 0x0B-malloc_free/1-strdup.c
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

/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: struct pointer dog
 *         NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	/* Return NULL if malloc failed to allocate memory */
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	/* Return NULL if strdup failed to allocate memory */
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	/* Return NULL if strdup failed to allocate memory */
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	/* Return the address of the newly created dog */
	return (new_dog);
}
