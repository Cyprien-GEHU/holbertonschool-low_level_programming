#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - add a new node at the beginning of a list
 * @head : the content of element
 * @n : integer
 *
 * Return: node add
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
