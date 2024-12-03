#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - return one node chose
 * @head : the content of element
 * @index : the node we choose
 * Return: head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x == index)
		{
			return (head);
		}

		head = head->next;
		x++;
	}
	return (NULL);
}
