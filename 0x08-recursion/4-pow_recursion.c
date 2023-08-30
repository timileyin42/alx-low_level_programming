#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to pow of y.
* @x: The base.
* @y: The exponent.
* Return: The result of x raised to power of y.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* return this as an error for y < 0 */
	}

	else if (y == 0)
	{
		return (1); /* base case: x raised to the power of 0 is 1 */
	}

	else
	{
		return (x * _pow_recursion(x, y - 1)); /* Recusive function called */
	}
}
