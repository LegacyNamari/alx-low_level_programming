#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: pointer to head
 *
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
