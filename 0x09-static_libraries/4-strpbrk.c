#include "main.h"

/**
* _strpbrk - Searching of a string for a certain bytes.
* @s: pointer to the string to search in.
* @accept: pointer to the string containing bytes to searchh for.
*
* Return: pointer to the first occurence of a matching bytes in s or null.
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s); /* return pointers to the first matching byte in s */
		}

		s++; /* move to the next characters in s */

	}

	return (NULL); /* no matching byte found in s */
}
