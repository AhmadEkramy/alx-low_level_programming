#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name
 * @f: pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

