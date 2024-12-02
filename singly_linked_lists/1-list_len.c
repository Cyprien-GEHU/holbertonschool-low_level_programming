#include "lists.h"

/**
 * print_list - print all element of a list
 * @h : the content of element
 *
 * Return: node printed
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
