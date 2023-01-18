#include "dog.h"
#include <stddef.h>
 
/**
 * init_dog - initialize dog struct
 *
 * @d: input pointer to struct dog
 * @name: input for dog name
 * @age: input for dog age
 * @owner: input for dog owner
 *
 * Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
