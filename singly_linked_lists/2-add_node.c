#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the beginning of a list
 * @head : the content of element
 * @str : chain of chara
 *
 * Return: node add
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *cop = strdup(str);
	int i = 0;

	if (str == NULL || new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->str = cop;
	new->len = i;
	new->next = *head;

	*head = new;
	return (new);
}
