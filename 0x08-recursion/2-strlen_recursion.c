#include "main.h"

/**
* _strlen_recursion - Returns the lenght of a string.
* @s: the string for which lenght is to be calculated.
*
* Return: The length of a string.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0); /* base case: stop when the string reach the null bytes */
	}

	return (1 + _strlen_recursion(s + 1)); /* recursive function called */
}
