#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculating the sum of all parameters.
 * @n: The number of parameters.
 * @...: The parameters to be summed.
 *
 * Return: The sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list calc;

	unsigned int x = 0;
	int sum = 0;

	va_start(calc, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(calc, int);
	}

	va_end(calc);

	return (sum);
}



