#include "lists.h"

/**
 * delete_dnodeint_at_index - frees all the nodes
 * @head: node value
 * @index: position of index at free
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (index == 0 && current != NULL)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL)
		return (-1);
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	free(current);
	return (1);
}
