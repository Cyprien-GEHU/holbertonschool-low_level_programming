#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name : the name of the person
 * @f : the function call
 *
 * Return: char or "NULL";
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
