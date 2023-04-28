#include <stdlib.h>
#include "lists.h"
/**
 * list_len - This returns the number of elements in a linked list
 *
 * @h: takes pointer value
 *
 * Return: Always 'node' (success)
 */
size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
