#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - scooby is free
 * @d : The struct typedef
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
