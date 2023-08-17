#include "main.h"

/**
 * positive_or_negative - Determines if a number is positive, negative,
 * or zero.
 *
 * 0 is the number to be checked
 *
 * @i: The integer to be evaluated.
 *
 * Return: (0)
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
