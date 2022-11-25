#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
* add_node - add node to a linked list in the specified position
* @head: represents the first node
* @str: tmp
* Return: return the address of the new element, or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int n;

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
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
