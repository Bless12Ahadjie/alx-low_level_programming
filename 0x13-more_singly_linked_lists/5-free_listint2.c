#include "lists.h"
/**
 * free_listint2 - This frees a listint_t list
 *
 * @head: takes value
 *
 * Returns: Always void (success)
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}
	*head = NULL;
}
