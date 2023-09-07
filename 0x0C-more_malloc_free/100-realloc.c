#include "main.h"

/**
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: pointer to the previously allocated memory.
* @old_size: size (in bytes) of the old memory block.
* @new_size: New size (in bytes) of the memory block.
*
* Return: A pointer to the reallocated memory blcok,
*          if new_size is equalto old_size, return ptr.
*          if  new_size is zero and ptr is not NULL return null
*          if ptr is NULL, returns a new memory block allocated.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	/* handling the code when new_size is zero and ptr is not NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr); /* freeing the old memory block */
		return (NULL);
	}

	/* block to execute when ptr is NULL */
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size); /* allocating of new memory to ptr1*/
		return (ptr1);
	}

	/* allocating of new memory block with malloc */
	ptr1 = malloc(new_size);

	/* check for memory allocation faliure */
	if (ptr1 == NULL)
		return (NULL);

	/* copying contents from the old block to new block */
	if (new_size > old_size)
		memcpy(ptr1, ptr, old_size);
	else
		memcpy(ptr1, ptr, new_size);

	/* freeing the old memory block */
	free(ptr);

	return (ptr1);
}
