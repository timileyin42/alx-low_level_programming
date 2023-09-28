#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 *
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int rep = 1UL << 63;
	int convert = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (rep > 0)
	{
		if ((n & rep) > 0)
		{
			convert = 1;
			_putchar('1');
		}
		else if (convert)
		{
			_putchar('0');
		}

		rep >>= 1;
	}
}
