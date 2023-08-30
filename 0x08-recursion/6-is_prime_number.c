#include "main.h"

/**
*check_prime - direct funtion to perform the actual prime check.
* @n: The number to be checked.
*@divide: the division to be check against.
* Return: 1 if n is prime, 0 if otherwise.
*/

int check_prime(int n, int divide)
{
	if (divide * divide > n)
	{
		return (1); /* no divisible found, n is prime */
	}

	else if (n % divide == 0)

	{
		return (0); /* found divisor, n is not prime */
	}

	else

	{
		return (check_prime(n, divide + 2)); /* check next odd divisor */
	}
}

/**
* is_prime_number - checking if a number is prime num.
* @n: The number to be checked.
* Return: 1 if n is prime, 0 otherwise.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* numbers less than 1 or = are not needed */
	}

	else if (n <= 3)

	{
		return (1); /* 2 and 3 are prime */
	}

	else if (n % 2 == 0 || n % 3 == 0)

	{
		return (0); /* numbers divisible by 2 or 3 are not prime */
	}

	else
	{
		return (check_prime(n, 5)); /* directly calling for another fun */
	}
}
