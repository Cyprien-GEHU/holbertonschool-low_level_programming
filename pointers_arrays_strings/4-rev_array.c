#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a : the array
 * @n : the numbers of elements of the array
 *
 * Return: "dest" with all string
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int chain;

	while (i < n)
	{
		n--;
		chain = a[i];
		a[i] = a[n];
		a[n] = chain;
		i++;
	}
}
