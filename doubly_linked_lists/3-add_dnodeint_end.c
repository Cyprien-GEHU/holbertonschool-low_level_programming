#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head : the content of element
 * @n : integer
 *
 * Return: node add end
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *end = *head;

	if (new == NULL)
		return (NULL);
	
	new->next = NULL;
	new->n = n;

	if (*head)
	{
		while (end->next != NULL)
			end = end->next;

		end->next = new;
		new->prev = end;
		return (new);
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}	
	return (new);
}
