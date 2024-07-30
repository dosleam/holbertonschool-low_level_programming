#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head to the linked list
 * @n: integer in linked list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *endnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		endnode = *head;

		while (endnode->next != NULL)
		{
			endnode = endnode->next;
		}

		endnode->next = newnode;
		newnode->prev = endnode;
	}

		return (newnode);
}
