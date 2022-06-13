#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at a given index
 * @idx: index of the list where the new node should be added
 * @h: pointer to head
 * @n: data to be added at the index
 *
 * Return: the new node data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while ((*h))
	{
		if (index == idx - 1)
			break;
		index++;
		(*h) = (*h)->next;
	}

	if ((*h) == NULL)
		return (NULL);

	if ((*h)->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = (*h)->next;
	(*new).prev = (*h);

	((*h)->next)->prev = new;
	(*h)->next = new;

	return (new);
}
