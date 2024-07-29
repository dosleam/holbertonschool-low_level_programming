#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head in the linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;

		if (head->str != NULL)
		{
			free(head->str);
		}
		free(head);
		head = tmp;
	}
}
