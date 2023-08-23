#include "main.h"

/**
* string_toupper - Convert lowercase letters in a string to uppercase
* @str: The string to be modified
*
* Return: Pointer to the modified string
*/

char *string_toupper(char *str)
{
	char *y;

	if (str == NULL)
	{
		return (NULL);
	}

	y = str;

	while (*y != '\0')
	{

		if (*y >= 97 && *y <= 122) /* ASCII values for 'a' and 'z' */
		{

			*y = *y - 32; /* ASCII difference between lowercase and uppercase letters */
		}

		y++;
	}

	return (str);
}

