#include "lists.h"

/**
 * dlistint_len - returns the numbers of elements in a linked dlistint_t list
 * @h: linked dlistint_t list
 * Return: numbers of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cp = 0;

	while (h != NULL)
	{
		h = h->next;
		cp++;
	}
	return (cp);
}
