#include "lists.h"

/**
 * list_len - return number of element
 * @h : the content of element
 *
 * Return: element
 */

size_t list_len(const list_t *h)
{
	int x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
