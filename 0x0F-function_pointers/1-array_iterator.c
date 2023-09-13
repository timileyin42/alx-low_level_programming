#include "function_pointers.h"

/**
* array_iterator - Execute a given function on element array.
* @array: pointer to the array of int.
* @size: size of the array.
* @action: pointer to the function.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
