#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @i: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int i)
{
int x = i % 10;

if (i < 0)
x = -i;

_putchar(x + '0');

return (x);
}

