#include "main.h"

/**
* create_array - Creates an array of chars and initialise it
* @size: the size of the array to create.
* @c: The character to initialize the array with.
*
* Return: A pointer to the created array, or null if fails.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	/* allocating memory for the array */
	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL); /* memory allocation failed */

	x = 0;

	while (x < size) /* iterate throught the char sofar x is less than size*/
	{
		array[x] = c; /* intialise each element with the element given */
		x++;
	}

	return (array);
}
