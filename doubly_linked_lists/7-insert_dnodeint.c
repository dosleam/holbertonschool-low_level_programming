#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a giver position
 * @h: pointer to the head of linked list
 * @idx: position for the new node
 * @n: integers tor the new node
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *current = *h;
	unsigned int cp = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
	}
	else
	{
		while (current != NULL && cp < idx - 1)
		{
			current = current->next;
			cp++;
		}
		if (current != NULL)
		{
			newnode->next = current->next;
			newnode->prev = current;
			if (current->next != NULL)
				current->next->prev = newnode;
			current->next = newnode;
		}
		else
		{
			free(newnode);
			return (NULL);
		}
	}
	return (newnode);
}
