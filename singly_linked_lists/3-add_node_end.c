#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head in the linked list
 * @str: string added
 * Return: the address of the new elements, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int string;
	list_t *newnode, *endnode;

	if (str == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (string = 0; str[string] != '\0'; string++)
	{
	}

	newnode->len = string;
	newnode->next = NULL;

	if (*head == NULL)
	{
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
	}
	return (newnode);
}
