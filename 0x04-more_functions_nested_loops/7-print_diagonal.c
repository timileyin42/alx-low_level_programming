#include "main.h"

/**
 * print_diagonal - Draws a diagonal line of backslashes ('\').
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int x, y;

for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}

