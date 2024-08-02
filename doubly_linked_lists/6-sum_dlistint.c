#include "lists.h"

/**
 * sum_dlistint - return the sum of all data of a dlistint
 * @head: pointer to the head of linked list
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
		{
			return (0);
		}
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
