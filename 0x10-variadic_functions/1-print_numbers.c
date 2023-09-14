#include "variadic_functions.h"

/**
 * print_numbers - printing of number followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers pass to the func.
 * @...: The integers to be print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int x;

	va_start(print, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(print, int));

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(print);

	printf("\n");
}
