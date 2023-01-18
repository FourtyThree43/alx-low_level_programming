#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 *
 * @d: input pointer to struct dog
 * @name: input for dog name
 * @age: input for dog age
 * @owner: input for dog owner
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	/* (*d).name = name; */
	d->name = name;
	/* (*d).owner = owner; */
	d->owner = owner;
	/* (*d).age = age; */
	d->age = age;
}
