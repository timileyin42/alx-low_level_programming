#include "lists.h"

/**
 * add_nodeint - Adding of a new node at the beginning of a listint_t
 *
 * @head: A double pointer to the head of the listint_t linked list.
 * @n: The integer data to be added to the new node.
 *
 * Return: The address of the new element (new node), or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* allocating memory for the new node to be add */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* setting n as the field of new node */
	new_node->n = n;
	/* setting the next field to point to the current head */
	new_node->next = *head;
	*head =  new_node;

	return (new_node);
}
