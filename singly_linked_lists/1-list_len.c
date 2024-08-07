#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list
 * Return: the numbers of elements
 */

size_t list_len(const list_t *h)
{
	size_t cpt = 0;

	while (h != NULL)
	{
		h = h->next;
		cpt++;
	}
	return (cpt);
}
