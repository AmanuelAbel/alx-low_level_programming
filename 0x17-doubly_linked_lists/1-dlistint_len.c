#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a dlistint_t
 * @h: the double linked list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
