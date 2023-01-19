#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 *
 * @d: pointer to struct dog
 *
 * Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: ");
		d->age == 0 ? 0 : printf("%f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
		
		/*printf("Name: %s\n", (d->name) ? d->name : "(nil)");*/
		/*printf("Name: %f\n", (d->age) ? d->age : 0);*/
		/*printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");*/
	}
}
