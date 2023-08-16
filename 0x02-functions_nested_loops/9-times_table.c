#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int x, y, a, b, c;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
a = x * y;
if (a > 9)
{
b = a % 10;
c = (a - b) / 10;
_putchar(c + '0');
_putchar(b + '0');
}
else
{
if (y != 0)
{
_putchar(' ');
}
_putchar(a + '0');
}
if (y < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

