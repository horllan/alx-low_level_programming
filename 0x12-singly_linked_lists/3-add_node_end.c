#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
* add_node_end - add node to a linked list in the specified position
* @head: represents the first node
* @str: tmp
* Return: return the address of the new element, or NULL if it fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;
	int n;

	current = *head;

	while (current && current->next != NULL)
		current = current->next;

	for (n = 0; str[n] != '\n'; n++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);

	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = n;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (*head);

}
