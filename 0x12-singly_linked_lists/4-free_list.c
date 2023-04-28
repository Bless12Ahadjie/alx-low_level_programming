#include <stdlib.h>
#include "lists.h"
/**
 * free_list - This  frees a list_t list
 *
 * @head: takes value
 *
 *Return: Always void (success)
 */
void free_list(list_t *head)
{
	list_t *req;

	while (head)
	{
		req = head->next;
		free(head->str);
		free(head);
		head = req;
	}
}

