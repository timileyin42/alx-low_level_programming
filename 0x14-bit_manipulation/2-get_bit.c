#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the specified index, or -1 if otherwise.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int rep = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & rep) == 0)
		return (0);
	else
		return (1);
}
