#include "lists.h"

/**
* free_list - function to free 'list' list
* @head: first node of a linked list
*
*/

void free_list(list_t *head)
{
list_t *current;
list_t *next;

current = head;

while (current != NULL)
{
next = current->next;
free(current->next);
free(current);
current = next;
}

}
