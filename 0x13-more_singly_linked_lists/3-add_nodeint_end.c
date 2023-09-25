#include "lists.h"

/**
 * add_nodeint_end - Adding of a new node at the end of listint_t
 * @head: A pointer to the head of listint linked
 * @n: The integer datato be added to the new node
 *
 * Return: The address of the new elements new node or null if otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
