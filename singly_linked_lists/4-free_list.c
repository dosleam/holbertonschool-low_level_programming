#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head in the linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (tmp != NULL)
	{
		tmp = head->next;
		free(str);
		free(head);
		head = tmp;
	}
}
