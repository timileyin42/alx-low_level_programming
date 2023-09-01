#include "main.h"

/**
* _strchr - Locates the first occurrence of character c in the string settings
* @s: pointer to the string to search in.
*@c: The character to search for.
*
* Return: pointer to the first occurence of c.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
