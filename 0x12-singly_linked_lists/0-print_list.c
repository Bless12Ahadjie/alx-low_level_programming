#include <stdio.h>
#include "lists.h"
/**
 * print_list - This prints all the elements of a linked list
 *
 * @h: takes pointer value
 *
 * Return: Always 'node' (success)
 */
size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		node++;
	}

	return (node);
}

