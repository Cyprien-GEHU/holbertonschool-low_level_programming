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

	if (idx == 0)
		return (add_dnodeint(h,n));

	for (; idx != 1; idx--)
	{
		if (tempo == NULL)
			return (NULL);
		tempo = tempo->next;
	}

	if (tempo->next == NULL)
		return(add_dnodeint_end(h, n));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tempo->next;
	new_node->prev = tempo;
	temp->next->prev = new_node;
	tempo->next = new_node

	return (new_node);
}
