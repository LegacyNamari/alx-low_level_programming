#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a dlistint_t linked list
 * @head: pointer to head
 * @index: index of the node.
 *
 * Return: nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);

		idx++;
		head = (*head).next;
	}

	return (NULL);
}
