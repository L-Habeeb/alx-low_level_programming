#include <stdio.h>
#include "dog.h"

/**
 * init_dog - dog initialization
 * @d: dog pointer
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
