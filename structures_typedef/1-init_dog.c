#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize
 * @d : the struct
 * @name : the name
 * @age : the age
 * @owner : the owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
