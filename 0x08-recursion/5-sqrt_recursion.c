#include "main.h"


/**
* recursive_sqrt - direct function to perfrom the recursive calculation.
* @n: The number which the square root will be calculated.
* @x: The place to begin the search.
* @y: The place to end the search.
* Return: The natural square root of n.
*/

int recursive_sqrt(int n, int x, int y)
{
	if (x <= y)
	{
		int m = (x + y) / 2; /*calculating the middle point */

		if (m * m == n)
		{
			return (m); /* found the square root */
		}

		else if (m * m < n)
		{
			return (recursive_sqrt(n, m + 1, y)); /* searchinh the right */
		}

		else

		{
			return (recursive_sqrt(n, x, m - 1)); /* searching the left */
		}
	}

	else
	{
		return (-1); /* no natural square root found */
	}
}

/**
* _sqrt_recursion - Returns the natural square root of number.
* @n: The number where the square root we be gotten.
*
* Return: The natural square root of n.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* return this to indicate error for negatuve num */
	}

	else if (n == 0 || n == 1)
	{
		return (n); /* Base case: square root of 0 or 1, number itself */
	}

	else
	{
		return (recursive_sqrt(n, 1, n)); /* directly calling for another fun */
	}
}
