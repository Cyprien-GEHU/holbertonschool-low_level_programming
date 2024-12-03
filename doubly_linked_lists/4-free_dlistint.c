#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dlistint_t - free the list
 * @head : the content of element
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *palace;

	while (head)
	{
		palace = head->next;
		free(head);
		head = palace;
	}
}
