#include "main.h"

/**
* string_nconcat - Concatenates two strings together.
* @s1: The first string.
* @s2: The second string.
* @n: numbers of char of s2 to concatenate to s1
*
* Return: A pointer to the concatenated string, return NULL if otherwise.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length1 = 0, length2 = 0;
	unsigned int x;

	/* if NULL is passed, treat as empty string */
	if (!s1)
		s1 = " ";
	if (!s2)
		s2 = " ";

	while (s1[length1])
		length1++;
	while (s2[length2] && length2 < n)
		length2++;

	/* allocating of memory for concat string */
	concat = malloc((length1 + length2 + 1) * sizeof(char));

	/* if malloc fails, return NULL */
	if (!concat)
		return (NULL);

	/* copying s1 into concat var */
	for (x = 0; x < length1; x++)
		concat[x] = s1[x];

	/* concatenate s2 into concat var */
	for (x = 0; x < length2; x++)
		concat[length1 + x] = s2[x];

	/* NUll terminator- terminate concate */
	concat[length1 + length2] = '\0';

	return (concat);
}
