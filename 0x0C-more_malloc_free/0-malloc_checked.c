#include "main.h"

/**
* malloc_checked - Allocating of memory using malloc
* @b: The size(in bytes) of the memory to allocate.
*
* Return: A pointer to the allocated memory, or 98 if otherwise.
*/

void *malloc_checked(unsigned int b)
{
	void *pt; /* declaring of a pointer to void (generic pointer). */

	pt = malloc(b); /* allocating memory of size 'b' using malloc. */

	if (pt == NULL) /* checking if malloc failed to allocate memory. */
	{
		exit(98); /* exit the program if malloc fails and terminate the program */
	}

	return (pt); /* return the pointer to the allocated memory. */
}
