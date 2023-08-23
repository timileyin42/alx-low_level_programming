#include "main.h"

/**
* _strcmp - Compare two strings
* @s1: Pointer to the first string
* @s2: Pointer to the second string
*
* Return: 0 if the strings are equal, negative if s1 < s2, positive if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	/* iterate through the strings until a mismatch is found */
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			/* Return the ASCII diffrence of the characters as compared */
			return (*s1 - *s2);
		}

		/* Move to the next characters in both strings */
		s1++;
		s2++;
	}

	/* Compare the lenght | replace thr difference in string lenghts */
	return (*s1 - *s2);
}
