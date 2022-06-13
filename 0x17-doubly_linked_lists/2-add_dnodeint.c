#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head pointer
 * @n: integer
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->prev = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	(*head)->prev = new;
	*head = new;

	return (new);
}
