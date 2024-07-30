#include "lists.h"

/**
 * free_dlistint - free a dlistint_t
 * @head: pointer to the head of a linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
