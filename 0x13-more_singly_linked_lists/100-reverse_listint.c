#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: A double pointer to the head of the listint_t linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *next_node = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		next_node = current->next;

		current->next = former;

		former = current;
		current = next_node;
	}

	*head = former;
	return (former);
}
