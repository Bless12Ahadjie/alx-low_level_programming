#include "lists.h"
/**
 * print_listint - This prints all the elements of a listint_t list.
 *
 * @h: takes value
 *
 * Return: Always 'a' (success)
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
