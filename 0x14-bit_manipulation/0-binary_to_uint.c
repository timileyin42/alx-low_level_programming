#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if there are non-binary characters in b.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] == '0' || b[x] == '1')
		{
			result = (result << 1) | (b[x] - '0');
			x++;
		}
		else
		{
			/* if non is found */
			return (0);
		}
	}

	return (result);
}
