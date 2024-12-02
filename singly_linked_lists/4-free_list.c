#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - free the list
 * @head : the content of element
 *
 */

void free_list(list_t *head)
{
	list_t *palace;

	while (head)
	{
		palace = head->next;
		free(head->str);
		free(head);
		head = palace;
	}
}
