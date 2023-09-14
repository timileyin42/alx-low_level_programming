#include "variadic_functions.h"

/**
 * print_all - prints anaything bsaed on the format specifier.
 * @format: A list of types of argument pass.
 * @...: The argument to be printed.
 */

void print_all(const char * const format, ...)
{
	va_list all;
	char *separator = " ";
	unsigned int x = 0;

	va_start(all, format);
	while (format && format[x])
	{
		if (x > 0 && (format[x] == 'c' || format[x] == 'i'
|| format[x] == 'f' || format[x] == 's'))
			printf("%s", separator);

		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				{
					char *str = va_arg(all, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				}
			default:
				x++;
				continue;
		}
		separator = ", ";
		x++;
	}
	printf("\n");
	va_end(all);
}
