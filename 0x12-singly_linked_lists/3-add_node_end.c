#include "lists.h"

/**
 * add_node_end - Functions that add a new node at the end of a linked list.
 *
 * @head: A double pointer to the head of the linked list.
 * @str: The string to be stroed in the new node.
 *
 * Return: The address of the new node, or null if otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL; /* new node is the last one */

	if (*head == NULL)
	{
		/* checking if the list is empty, new node becomes the head */
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			/* travase to the last node */
			current = current->next;
		}

		/* updtate the last node's next pointer */
		current->next = new_node;
	}
	return (new_node);
}
