#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a new node with a position
 * @h : the content of element
 * @idx : the position of the node
 * @n : the value to add
 * Return: the adress of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tempo = *h;

	if (h == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		if (*h)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	while (tempo != NULL)
	{
		if (index == idx - 1)
		{
			new_node->next = tempo->next;
			new_node->prev = tempo;
			tempo->next = new_node;
			return (new_node);
		}
		index++;
		tempo = tempo->next;
	}
	return (NULL);
}
