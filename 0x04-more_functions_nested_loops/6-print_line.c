#include "main.h"

/**
 * print_line - Draws a straight line of underscores in the terminal.
 * @n: The number of times the character '_' should be printed.
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int x;

for (x = 0; x < n; x++)
{
_putchar('_');
}

_putchar('\n');
}
}

