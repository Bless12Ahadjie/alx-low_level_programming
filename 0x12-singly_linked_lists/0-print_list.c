#include "lists.h"
#include <stdio.h>
/**
 * print_list - This prints all the elements of a list_t list
 *
 * @h: takes pointer value
 *
 * Return: Always 'num_node' (success)
 */
size_t print_list(const list_t *h)
{
	size_t num_node;

	num_node = 0;

	while (h)
	{
		if (!h->str)
		{
			_putchar("[0] (nil)");
			_putchar("\n");
		}
		else
		{
			_putchar("[%u] %s", h->len, h->str);
			_putchar("\n");
		}
		h = h->next;
		num_node++;
	}
	return (num_node);
}
