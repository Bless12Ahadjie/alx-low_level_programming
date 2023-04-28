#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * list_len - This returns the number of elements
 * in a linked list_t list.
 *
 * @h: takes pointer value
 *
 * Return: Always 'node' (success)
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (hi)
	{
		node++;
		h = h->next;
	}
	return (node);
}
