#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This  prints a name
 *
 * @name: takes value
 * @f: takes value
 *
 * Return: Always void (success)
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
