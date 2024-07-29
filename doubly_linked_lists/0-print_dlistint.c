#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: linked list
 * Return: the numbers of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cp = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cp++;
	}
	return (cp);
}
