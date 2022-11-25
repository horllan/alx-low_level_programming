#include "lists.h"

/**
 * list_len - this is a function that returns the length of a linked list
 * @h: pointer to the next node
 * Return: return the size of the linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t s = 0;

	while (p != NULL)
	{
		p = p->next;
		s++;
	}

	return (s);

}
