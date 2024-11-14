#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcpy - print the half of the string
 *
 * @dest : the string copy
 * @src : the string source
 *
 * Return: "dest"
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (*src)
	{
		len++;
		src++;
	}

	src = src - len;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

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

	if (nd == 0)
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

	nd->name = _strcpy(nd->name, name);
	nd->owner = _strcpy(nd->owner, owner);

	return (nd);
}
