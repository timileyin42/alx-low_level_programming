#include "main.h"

/**
* array_range - Creates an array of integers.
* @min: The minimum value (inclusive).
* @max: The maximum value (inclusive).
*
* Return: A pointer to the newly created array,
* return NULL, if otherwise.
*/

int *array_range(int min, int max)
{
	int *array;
	int size, x;

	/* checking if min > max return NULL */
	if (min > max)
		return (NULL);

	/* Calculates the size of the array */
	size = max - min + 1;

	/* Allocating of memory for the array */
	array = malloc(sizeof(int) * size);

	/* checking for memory failure */
	if (array == NULL)
		return (NULL);

	/* initializing the array with values from main to max */
	for (x = 0; x < size; x++)
		array[x] = min++;

	return (array);
}
