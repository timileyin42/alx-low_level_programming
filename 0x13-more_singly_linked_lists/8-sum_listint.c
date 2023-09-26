#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: A pointer to the head of the listint_t linked list.
 *
 * Return: The sum of all the data values, or NULL if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (-1);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
