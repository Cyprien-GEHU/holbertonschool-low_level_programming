#include "lists.h"

/**
 * dlistint_len - return number of element
 * @h : the content of element
 *
 * Return: element
 */

size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
