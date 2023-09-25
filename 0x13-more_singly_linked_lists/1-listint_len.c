#include "lists.h"

/**
 * listint_len - Returns the numbers of element in a listint linked
 *
 * @h: Apointer to the head of the of the listint_t linked list
 *
 * Return: The number of elements in the link
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	/* traversing through the node */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
