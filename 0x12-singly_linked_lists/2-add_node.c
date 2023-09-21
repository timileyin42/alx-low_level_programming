#include "lists.h"

/**
 * add_node - Functions that add new node at the beginning of a linked list.
 * @head: A double pointer to the head of the of the linked list.
 * @str: The string tobe stroed in the new node.
 *
 * Return: The address of the new element (new node) or null if fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
