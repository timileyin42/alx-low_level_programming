#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' character.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
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
for (y = 0; y <= x; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

