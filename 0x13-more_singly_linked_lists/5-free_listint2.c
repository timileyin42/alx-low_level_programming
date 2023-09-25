#include "lists.h"

/**
 * free_listint2 - frees a listint_t linked list and set the head to null
 *
 * @head: A pointer to the head of listint linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *count;

	while (*head != NULL)
	{
		count = *head;
		*head = (*head)->next;
		free(count);
	}
}
