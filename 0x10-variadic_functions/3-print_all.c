#include "variadic_functions.h"

/**
 * print_all - prints anaything bsaed on the format specifier.
 * @format: A list of types of argument pass.
 * @...: The argument to be printed.
 */

void print_all(const char * const format, ...)
{
	va_list all;
	char *str, *separator = "";
	unsigned int x = 0;

	va_start(all, format);
	if (format)

	while (format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", separator, va_arg(all, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(all, double));
				break;
			case 's':
				{
					str = va_arg(all, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				}
			default: /* ignore other characters */
				x++;
				continue;
		}
		separator = ", ";
		x++;
	}
	printf("\n");
	va_end(all);
}
