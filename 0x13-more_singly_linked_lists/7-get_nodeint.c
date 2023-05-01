#include "lists.h"
/**
 * get_nodeint_at_index - This returns the nth node of a listint_t linked list.
 *
 * @head: takes value
 * @index: takes value
 *
 * Return: Always 'hold'(success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *hold = head;

	while (hold && a < index)
	{
		hold = hold->next;
		a++;
	}
	return (hold ? hold : NULL);
}
