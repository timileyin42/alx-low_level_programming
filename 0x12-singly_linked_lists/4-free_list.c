#include "lists.h"

/**
 *free_list - frees a linked list and its associated memory.
 *
 * @head: A pointer to the head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		/* storng the next node*/
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
