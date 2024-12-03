#include "lists.h"

/**
 * print_dlistint - print all element of a list
 * @h : the content of element
 *
 * Return: node printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		if (h == NULL)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
