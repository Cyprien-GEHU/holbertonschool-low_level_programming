#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name : the name of the dog
 * @age : age of the dog
 * @owner : the owner dog
 *
 * Return: "NULL" or new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (name == NULL || owner == NULL)
		return (NULL);

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->name = malloc(sizeof(name));
	nd->owner = malloc(sizeof(owner));
	nd->age = age;

	if (nd->name == NULL)
	{
		free(nd->name);
		return (NULL);
	}

	if (nd->owner == NULL)
	{
		free(nd->owner);
		return (NULL);
	}

	nd->name = name;
	nd->owner = owner;

	return (nd);
}
