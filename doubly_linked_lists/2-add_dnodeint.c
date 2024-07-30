#include "lists.h"

/*
 * add_dnodeint - adds new node at the beginning of a dlistint_t
 * @head: pointer to the addres of the head
 * @n: integers for the new node to contain
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	
	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
