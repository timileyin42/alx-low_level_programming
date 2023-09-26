#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list
 *
 * @head: A double pointer to the head of the listint_t linked list.
 * @idx: The index where the new node should be added (index starts at 0).
 * @n: The integer data to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (idx > 0)
	{
		temp = *head;
		count = 0;
		while (temp != NULL && count < idx - 1)
		{
			temp = temp->next;
			count++;
		}

		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
