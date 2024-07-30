#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint
 * @head: pointer to the head of a linked list
 * @index: node to delete
 * Return: 1 if it succes, -1 if it fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *supr;
	unsigned int cp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		return (1);
	}

	for (cp = 0; current != NULL && cp < index - 1; cp++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	supr = current->next;
	current->next = supr->next;
	
	if (supr->next != NULL)
		supr->next->prev = current;
	
	return (1);
}
