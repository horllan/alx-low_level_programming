#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements
 *
 * @h: pointer to the next
 * Return: number of nodes in the linked list
 */

size_t print_list(const size_t *h)
{
	size_t nodes = 0;
	const list_t *c = h;

	while (c != NULL)
	{
		printf("[%d] %s\n\", c->lent,
		c->str != NULL ? c->str : "(nil)");

		c = c->next;
		nodes++;

	}

	return (nodes);

}

