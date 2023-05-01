#include "lists.h"
/**
 * listint_len - This returns the number of
 * elements in a linked listint_t list.
 *
 * @h: takes value
 *
 * Return: Always 'a' (success)
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
