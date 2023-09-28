#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from n to m.
 *
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int sum = 0;

	while (xor_result)
	{
		sum = sum + (xor_result & 1);
		xor_result >>= 1;
	}

	return (sum);
}
