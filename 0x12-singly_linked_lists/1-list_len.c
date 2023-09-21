#include "lists.h"

/**
 * list_len - Returns the number of element in a linked list.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	/* initializing count to zero */
	size_t count = 0;

	while (h != NULL)
	{
		/* looping through the node */
		count++;
		h = h->next;
	}

	return (count);
}
