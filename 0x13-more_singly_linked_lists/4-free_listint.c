#include "lists.h"

/**
 * free_listint - freeing of the linked list memory
 *
 * @head: A pointer to the head of listint_t linked list
 */

void free_listint(listint_t *head)
{
	listint_t  *count;

	while (head != NULL)
	{
		count = head;
		head = head->next;
		free(count);
	}
}
