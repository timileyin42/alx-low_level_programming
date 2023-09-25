#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t linked list
 *
 * Return: The count (n) of the head node, 0 if otherwise
 */

int pop_listint(listint_t **head)
{
	/* pointer to hold the head node */
	listint_t *temp;
	/* var to store the data ofthe head node */
	int count;

	temp = *head;

	/* checking if it's empty */
	if (temp == NULL)
		return(0);

	/* storing of the newest head node in temporary var */
	*head = temp->next;
	/* getting the data of the head node */
	count = temp->count;

	/* freing of the memory of the old node */
	free(temp);

	/* return the data of old node */
	return (count);
}
