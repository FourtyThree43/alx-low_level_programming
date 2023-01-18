#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: a pointer with the new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, n_name, n_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || !name || !owner)
	{
		free(new_dog);
		return (NULL);
	}

	for (n_name = 0 ; name[n_name] ; n_name++)
		;
	for (n_owner = 0 ; owner[n_owner] ; n_owner++)
		;

	new_dog->name = malloc(n_name + 1);
	new_dog->owner = malloc(n_owner + 1);

	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0 ; i < n_name ; i++)
	new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	new_dog->age = age;

	for (i = 0 ; i < n_owner ; i++)
	new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	return (new_dog);
}
