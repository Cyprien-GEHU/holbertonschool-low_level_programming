#include "lists.h"

/**
 * print_list - print all element of a list
 * @h : the content of element
 *
 * Return: node printed
 */

size_t print_list(const list_t *h)
{
	int x = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
