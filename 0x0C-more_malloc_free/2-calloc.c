#include "main.h"
/**
* _calloc - Allocating of memory for an array and initialize it to zero
* @nmemb: The number of element in the array.
* @size: The size (in bytes) of each element.
*
* Return: A pointer to the allocated and initialize memory,
* or NULL if otherwise.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	unsigned int length;

	/* checking if nmemb or size is 0, return 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* calculating the total size, wqnt to allocate */
	length = nmemb * size;

	/* allocating of memory for the array using malloc */
	pt = malloc(length);

	/* Checking for memory allocation faliure */
	if (pt == NULL)
		return (NULL);

	/* initializing the allocated memory to zero */
	memset(pt, 0, length);

	return (pt);
}
