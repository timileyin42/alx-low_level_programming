#include "lists.h"

/**
 * print_list - prints all elements of a singly linked list and counts nodes
 *
 * @h:  A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	/* initializing the count to 0 */
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
