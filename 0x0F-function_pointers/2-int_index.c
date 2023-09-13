#include "function_pointers.h"

/**
* int_index - Search for an integer in an array.
* @array: pointer to the array of integers.
* @size: Number of element in the array.
* @cmp: pointer to the comparison function.
*
* Return: index of the first element.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;
	if (array != NULL && cmp != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}
	return (-1); /* if no matching element found */
}
