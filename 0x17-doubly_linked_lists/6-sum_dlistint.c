#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to head
 *
 * Return: sum  of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	sum += sum_dlistint((*head).next);
	sum += (*head).n;

	return (sum);
}
