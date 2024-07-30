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

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;

	return (newnode);
}
