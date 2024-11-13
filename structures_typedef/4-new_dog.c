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

	nd = malloc(sizeof(dog_t) + 1);
	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->name = malloc(sizeof(name) + 1);
	nd->owner = malloc(sizeof(owner) + 1);
	nd->age = age;

	if (nd->name == NULL || nd->owner == NULL)
	{
		free(nd->name);
		free(nd->owner);
		free(nd);
		return (NULL);
	}

	nd->name = name;
	nd->owner = owner;

	return (nd);
}
