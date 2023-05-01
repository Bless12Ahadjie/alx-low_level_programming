#include "lists.h"
/**
 * free_listint - This frees a listint_t list.
 *
 * @head: takes value
 *
 * Return: Always void (success)
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
