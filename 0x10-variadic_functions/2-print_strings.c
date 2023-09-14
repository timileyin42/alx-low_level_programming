#include "variadic_functions.h"

/**
 * print_strings - Printing of string followed by a new line.
 * @separator: The string to be printed betweeen the strings.
 * @n: The number of string passed to the function.
 * @...: The strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int x;
	char *str;

	va_start(string, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(string, char *);

		if (str != NULL)
		{
			printf("%s", str);
		} else

		{
			printf("(nil)");
		}

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(string);

	printf("\n");
}
