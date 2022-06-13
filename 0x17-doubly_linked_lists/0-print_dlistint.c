#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints the elemsts of a dlistint_t list
 * @h: pointer to head of dlistint
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodesNum = 0;

	while (h)
	{
		nodesNum++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodesNum);
}
