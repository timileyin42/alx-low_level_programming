#include "main.h"

/**
 * print_square - Prints a square of '#' characters, followed by a new line.
 * @size: The size of the square.
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x, y;

for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

