#include "main.h"

/**
* factorial - Returns the factorial of a given number.
* @n: The number for which factorial is to be calculated.
*
* Return: the factorial of the number.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* to indicate error for n < 0 */
	}

	else if (n == 0)
	{
		return (1); /* base case: factorial of 0 is always 1 */
	}

	else
	{
		return (n * factorial(n - 1)); /* recursive case being called */
	}
}
