#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete a node with a index
 * @head : the content of element
 * @index : the node we choose
 * Return: head
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *tp = *head;
	dlistint_t *end;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (tp->next != NULL)
			tp->next->prev = NULL;

		if (*head == NULL)
			return (-1);

		*head = tp->next;
		free(tp);
		return (1);
	}
	while (x < index - 1 && tp != NULL)
	{
		tp = tp->next;
		x++;
	}
	if (tp == NULL || tp->next == NULL)
		return (-1);

	end = tp->next;
	tp->next = end->next;

	if (end->next != NULL)
		end->next->prev = tp;
	free(end);
	return (1);
}
