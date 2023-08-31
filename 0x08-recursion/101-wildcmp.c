#include "main.h"

/**
* wildcmp - Compare and contrast two strings considering wildcard '*'.
* @s1: The first string to compare.
* @s2: The second string to compare.
*
* Return: 1 if strings are identical, 0 if otherwise.
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0') /* if the next char is the end of s2, return 1 */
		{
			return (1);
		}

		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}

		return (wildcmp(s1, s2 + 1) || (wildcmp(s1 + 1, s2)));
	}

	if (*s1 != *s2)
	{
		return (0);
	}

	if (*s1 == '\0')
	{
		return (1); /* both string close, as they are identical */
	}

	return (wildcmp(s1 + 1, s2 + 1)); /* continue to compare char */
}

