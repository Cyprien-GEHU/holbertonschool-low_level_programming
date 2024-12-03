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
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			(*head)->prev->next = (*head)->next;
			return (1);
		}

		(*head) = (*head)->next;
		i++;
	}
	return(-1);
}
