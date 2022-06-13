#include "lists.h"

/**
 * free_dlistint - frees a dlistint
 * @head: pointer to head
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	free_dlistint(head->next);
	free(head);
}
