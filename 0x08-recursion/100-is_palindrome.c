#include "main.h"

/**
* check_palindrome - direct function to performs the actual palindrome checks
* @s: The string to be checked
* @x: The starting index for the comparision.
* @y: The ending index for the comparision.
* Return: 1if s is a palindrome, 0 otherwise.
*/

int check_palindrome(char *s, int x, int y)
{
	if (x >= y)
	{
		return (1); /* if the comparision reaches the middle or pass, palindrome */
	}

	if (s[x] != s[y])
	{
		return (0); /* if char not match, not palindrome */
	}

	return (check_palindrome(s, x + 1, y - 1)); /* recursive comparision fun */
}

/**
* _strlen - Calculating the length of the string
* @s: The string for which length is to be calculated from.
*
* Return: The length of the string.
*/

int _strlen(char *s)
{
	if (*s == '\0')

	{
		return (0);
	}

	return (1 + _strlen(s + 1));
}

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to be checked.
* Return: 1 if s is a palindrome, 0 otherwise.
*/

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, 0, length - 1));
}
