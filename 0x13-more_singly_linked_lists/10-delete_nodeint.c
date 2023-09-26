#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 *
 * @head: A double pointer to the head of the listint_t linked list.
 * @index: The index of the node to be deleted (index starts at 0).
 *
 * Return: 1 if deletion succeeded, or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current = *head;
	unsigned int count = 0;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (; count < (index - 1); count++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
