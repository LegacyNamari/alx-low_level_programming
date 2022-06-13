#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to head pointer
 * @index: index of the node to be deleted
 *
 * Return: data
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *delete = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (temp->next == NULL && temp->prev == NULL && index == 0)
	{
		*head = NULL;
		free(temp);
		return (1);
	}

	if (index == 0)
	{
		delete = temp->next;
		delete->prev = NULL;
		*head = delete;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	delete = temp->next;
	temp->next = delete->next;
	if (delete->next)
		delete->next->prev = temp;

	free(delete);
	return (1);
}
