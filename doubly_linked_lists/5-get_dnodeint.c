#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint
 * @head: pointer to the head of a linked list
 * @index: node in the linked list
 * Return: adress of th new element, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth;

	for (nth = 0; head != NULL && nth < index; nth++)
	{
		head = head->next;
	}

	return (head);
}
