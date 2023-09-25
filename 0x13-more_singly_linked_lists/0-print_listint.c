
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t linked list.
 *
 * @h: A pointer to the head of the listint_t linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *charge = h;
	/* initializing the count variable */
	size_t count = 0;

	/* traversing the linked list and print each element */
	while (charge != NULL)
	{
		printf("%d\n", charge->n);
		count+= 1;
		charge = charge->next;
	}

	return (count);
}
